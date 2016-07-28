using Microsoft.Research.Malmo;
using RunMission.Framework;

namespace RunMission.Utils {
	public static class AgentHostExtensions {
		public static Player StartMissionAdvanced(this AgentHost agenthost, MissionSpec mission, MissionRecordSpec missionRecord) {
			agenthost.startMission(mission, missionRecord);
			return new Player(agenthost);
		}
	}
}