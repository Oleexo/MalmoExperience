using Newtonsoft.Json;

namespace RunMission.Framework.ObservationModels {
    public class NearbyEntity {
        [JsonProperty("x")]
        public float X { get; set; }
        [JsonProperty("y")]
        public float Y { get; set; }
        [JsonProperty("z")]
        public float Z { get; set; }
        [JsonProperty("name")]
        public string Name { get; set; }
        [JsonProperty("quantity")]
        public int Quantity { get; set; }
        [JsonProperty("colour")]
        public string Colour { get; set; }
        [JsonProperty("variation")]
        public string Variation { get; set; }
    }
}