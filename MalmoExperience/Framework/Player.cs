using Microsoft.Research.Malmo;

namespace RunMission.Framework {
	public class Player {
		protected readonly AgentHost Agenthost;

		public Inventory Inventory { get; set; }

		public Player(AgentHost agenthost) {
			Agenthost = agenthost;
			Inventory = new Inventory(agenthost);
		}

		public void MoveForward() {
			
		}

		public void MoveBackward() {
			
		}

		public void MoveToLeft() {
			
		}

		public void MoveToRight() {
			
		}

		public void JumpForward() {
			
		}

		public void JumpBackward() {
			
		}

		public void TurnAround() {
			
		}

		public void TurnLeft() {
			
		}

		public void TurnRight() {
			
		}
	}
}