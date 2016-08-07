namespace RunMission.Framework.Utils {
    public class PlayerPosition : Coordinate {
        public PlayerPosition(float x, float y, float z, float yaw, float pitch) : base(x, y, z) {
            Yaw = yaw;
            Pitch = pitch;
        }

        public PlayerPosition(Coordinate coordinate, float yaw, float pitch) : base(coordinate.X, coordinate.Y, coordinate.Z) {
            Yaw = yaw;
            Pitch = pitch;
        }

        public float Yaw { get; }
        public float Pitch { get; }
    }
}