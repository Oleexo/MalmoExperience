using System;
using System.Linq;
using Microsoft.Research.Malmo;
using Newtonsoft.Json.Linq;

namespace RunMission.Framework {
    public class Inventory {
        protected readonly AgentHost Agenthost;
        protected readonly InventoryItem[] Items;

        public Inventory(AgentHost agenthost) {
            Agenthost = agenthost;
            Items = new InventoryItem[40];
        }

        public void Refresh(string observationText) {
            var jObject = JObject.Parse(observationText);
            for (var i = 0; i < 40; i++) {
                JToken itemType;
                if (!jObject.TryGetValue($"InventorySlot_{i}_item", StringComparison.Ordinal, out itemType)) {
                    continue;
                }
                var quantity = jObject.GetValue($"InventorySlot_{i}_size");
                var variant = jObject.GetValue($"InventorySlot_{i}_variant");
                Items[i] = new InventoryItem(i,
                    itemType.Value<string>(),
                    variant?.Value<string>(),
                    quantity.Value<int>());
            }
        }

        /// <summary>
        /// untested
        /// </summary>
        /// <param name="item1"></param>
        /// <param name="item2"></param>
        public void SwapItems(InventoryItem item1, InventoryItem item2) {
            Agenthost.sendCommand($"swapInventoryItems {item1.Slot} {item2.Slot}");
        }

        /// <summary>
        /// untested
        /// </summary>
        /// <param name="item"></param>
        public void SelectItem(InventoryItem item) {
            Agenthost.sendCommand($"swapInventoryItems {item.Slot} 0");
            Agenthost.sendCommand("hotbar.1 1");
            Agenthost.sendCommand("hotbar.1 0");
        }

        /// <summary>
        /// not working
        /// </summary>
        /// <param name="item"></param>
        public void Discard(InventoryItem item) {
            Agenthost.sendCommand($"swapInventoryItems {item.Slot} 1");
            Agenthost.sendCommand("hotbar.2 1");
            Agenthost.sendCommand("hotbar.2 0");
            Agenthost.sendCommand("discardCurrentItem");
        }

        public InventoryItem Get(string type, string variant = null) {
            if (variant != null) {
                return Items.FirstOrDefault(o => o != null && o.Type.Equals(type) && o.Variant.Equals(variant));
            }
            return Items.FirstOrDefault(o => o != null && o.Type.Equals(type));
        }
    }
}