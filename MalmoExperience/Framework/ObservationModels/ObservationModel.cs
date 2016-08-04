using System.Collections.Generic;

namespace RunMission.Framework.ObservationModels {
    public class ObservationModel {
        public IList<string> Visions { get; set; }
        public IList<NearbyEntity> NearbyEntities { get; set; }
        public LineOfSight LineOfSight { get; set; }
    }
}