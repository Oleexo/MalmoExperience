namespace RunMission.Framework {
    public class Item : BlockOrItem {
        public int Quantity { get; }

        public Item(double x, double y, double z, 
            string name, string variation,
            Color colour, Facing facing, 
            int quantity) : base(x, y, z, name, variation, colour, facing) {
            Quantity = quantity;
        }
    }
}