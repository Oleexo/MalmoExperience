namespace RunMission.Framework {
    public class Block : BlockOrItem {
        public Block(double x, double y, double z, 
            string name, string variant, 
            Color color, Facing facing)
            : base(x, y, z, name, variant, color, facing) {
        }
    }
}