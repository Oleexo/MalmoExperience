namespace RunMission.Framework.Utils {
	public class Coordinate {
		public Coordinate(float x, float y, float z) {
			X = x;
			Y = y;
			Z = z;
		}

		public Coordinate Center() {
			return new Coordinate(X + 0.5f, Y + 0.5f, Z + 0.5f);
		}

		public float X { get; }
		public float Y { get; }
		public float Z { get; }
	}
}