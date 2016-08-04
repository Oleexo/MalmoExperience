using Newtonsoft.Json;

namespace RunMission.Framework.ObservationModels {
    public class LineOfSight {
        [JsonProperty("hitType")]
        public string HitType { get; set; }

        [JsonProperty("x")]
        public double X { get; set; }
        [JsonProperty("y")]
        public double Y { get; set; }
        [JsonProperty("z")]
        public double Z { get; set; }

        [JsonProperty("type")]
        public string Type { get; set; }
        [JsonProperty("inRange")]
        public bool InRange { get; set; }
    }
}