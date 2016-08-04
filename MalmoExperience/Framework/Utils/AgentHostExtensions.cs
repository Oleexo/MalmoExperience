using Microsoft.Research.Malmo;

namespace RunMission.Framework.Utils {
	public static class AgentHostExtensions {
		public static Body StartMissionAdvanced(this AgentHost agenthost, MissionSpec mission, MissionRecordSpec missionRecord) {
			agenthost.startMission(mission, missionRecord);
			return new Body(agenthost);
		}
	}
}