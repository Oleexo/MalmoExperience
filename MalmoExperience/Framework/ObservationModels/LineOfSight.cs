using Newtonsoft.Json;

namespace RunMission.Framework.ObservationModels {
    public class LineOfSight {
        [JsonProperty("hitType")]
        public string HitType { get; set; }

        [JsonProperty("x")]
        public float X { get; set; }
        [JsonProperty("y")]
        public float Y { get; set; }
        [JsonProperty("z")]
        public float Z { get; set; }

        [JsonProperty("type")]
        public string Type { get; set; }
        [JsonProperty("inRange")]
        public bool InRange { get; set; }
    }
}