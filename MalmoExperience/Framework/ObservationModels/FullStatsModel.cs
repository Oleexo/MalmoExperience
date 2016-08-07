namespace RunMission.Framework.ObservationModels {
    public class FullStatsModel {
        public int DistanceTravelled { get; set; }
        public int TimeAlive { get; set; }
        public int MobsKilled { get; set; }
        public int DamageTaken { get; set; }
        public decimal Life { get; set; }
        public int Score { get; set; }
        public int Food { get; set; }
        public int XP { get; set; }
        public bool IsAlive { get; set; }
        public int Air { get; set; }
        public float XPos { get; set; }
        public float YPos { get; set; }
        public float ZPos { get; set; }
        public float Pitch { get; set; }
        public float Yaw { get; set; }
    }
}