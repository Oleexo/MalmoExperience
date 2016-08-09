namespace RunMission.Framework {
    public class InventoryItem {
        #region Equals
        protected bool Equals(InventoryItem other) {
            return Slot == other.Slot && string.Equals(Type, other.Type) && string.Equals(Variant, other.Variant) && Quantity == other.Quantity;
        }

        public override bool Equals(object obj) {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != this.GetType()) return false;
            return Equals((InventoryItem) obj);
        }

        public override int GetHashCode() {
            unchecked {
                var hashCode = Slot;
                hashCode = (hashCode * 397) ^ (Type != null ? Type.GetHashCode() : 0);
                hashCode = (hashCode * 397) ^ (Variant != null ? Variant.GetHashCode() : 0);
                hashCode = (hashCode * 397) ^ Quantity;
                return hashCode;
            }
        }
        #endregion

        public InventoryItem(int slot, string type, string variant, int quantity) {
            Slot = slot;
            Type = type;
            Variant = variant;
            Quantity = quantity;
        }

        public int Slot { get; }
        public string Type { get; }
        public string Variant { get; }
        public int Quantity { get; }
    }
}