namespace RunMission.Framework.Utils {
    public class PlayerPosition : Coordinate {
        public PlayerPosition(double x, double y, double z, double yaw, double pitch) : base(x, y, z) {
            Yaw = yaw;
            Pitch = pitch;
        }

        public PlayerPosition(Coordinate coordinate, double yaw, double pitch) : base(coordinate.X, coordinate.Y, coordinate.Z) {
            Yaw = yaw;
            Pitch = pitch;
        }

        public double Yaw { get; }
        public double Pitch { get; }
    }
}