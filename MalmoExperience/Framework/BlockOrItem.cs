using System.Text;
using RunMission.Framework.Utils;

namespace RunMission.Framework {
    public abstract class BlockOrItem : Coordinate {
        protected BlockOrItem(double x, double y, double z, 
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