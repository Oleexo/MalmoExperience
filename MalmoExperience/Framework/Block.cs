namespace RunMission.Framework {
    public class Block : BlockOrItem {
        public Block(float x, float y, float z, 
            string name, string variant, 
            Color color, Facing facing)
            : base(x, y, z, name, variant, color, facing) {
        }
    }
}