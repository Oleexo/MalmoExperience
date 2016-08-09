namespace RunMission.Framework.Utils {
    public class Coordinate {
        #region Equals
        protected bool Equals(Coordinate other) {
            return X.Equals(other.X) && Y.Equals(other.Y) && Z.Equals(other.Z);
        }

        public override bool Equals(object obj) {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != this.GetType()) return false;
            return Equals((Coordinate) obj);
        }

        public override int GetHashCode() {
            unchecked {
                var hashCode = X.GetHashCode();
                hashCode = (hashCode * 397) ^ Y.GetHashCode();
                hashCode = (hashCode * 397) ^ Z.GetHashCode();
                return hashCode;
            }
        }
        #endregion

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