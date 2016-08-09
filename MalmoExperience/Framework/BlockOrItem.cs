using System.Text;
using RunMission.Framework.Utils;

namespace RunMission.Framework {
    public abstract class BlockOrItem : Coordinate {
        #region Equals
        protected bool Equals(BlockOrItem other) {
            return base.Equals(other) && string.Equals(Name, other.Name) && string.Equals(Variant, other.Variant);
        }

        public override bool Equals(object obj) {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            var other = obj as BlockOrItem;
            return other != null && Equals(other);
        }

        public override int GetHashCode() {
            unchecked {
                int hashCode = base.GetHashCode();
                hashCode = (hashCode * 397) ^ (Name != null ? Name.GetHashCode() : 0);
                hashCode = (hashCode * 397) ^ (Variant != null ? Variant.GetHashCode() : 0);
                return hashCode;
            }
        }
        #endregion

        protected BlockOrItem(float x, float y, float z,
            string name, string variant,
            Color color, Facing facing) : base(x, y, z) {
            Name = name;
            Variant = variant;
            Color = color;
            Facing = facing;
        }

        public string Name { get; }
        public string Variant { get; }
        public Color Color { get; }
        public Facing Facing { get; }

        public override string ToString() {
            var sb = new StringBuilder();
            sb.Append(Name);
            if (Variant != null) {
                sb.Append($":{Variant}");
            }
            sb.Append($"({X},{Y},{Z})");
            if (Color != Color.None) {
                sb.Append($" Color: {Color}");
            }
            if (Facing != Facing.Unknown) {
                sb.Append($" Facing: {Facing}");
            }
            return sb.ToString();
        }
    }
}