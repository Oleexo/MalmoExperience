using System;
using System.Linq;
using System.Threading;
using Microsoft.Research.Malmo;
using Newtonsoft.Json;
using RunMission.Framework.ObservationModels;
using RunMission.Framework.Utils;

namespace RunMission.Framework {
    public class Body {
        #region Fields
        protected readonly AgentHost Agenthost;
        #endregion

        #region Properties
        public decimal Life { get; private set; }
        public int Food { get; private set; }
        public int Xp { get; private set; }
        public int Air { get; private set; }
        public PlayerPosition Position { get; private set; }
        public bool IsAlive { get; private set; }
        public bool IsOnMission { get; private set; }


        public Inventory Inventory { get; }
        protected Eyes Eyes { get; }
        protected Brain Brain { get; }
        #endregion

        public Body(AgentHost agenthost) {
            Agenthost = agenthost;
            Inventory = new Inventory(agenthost);
            Eyes = new Eyes(this);
            Brain = new Brain(this, Eyes);
            IsOnMission = true;
        }

        public void Born() {
            Brain.StartToThink();
            ResfreshObservation();
        }

        public void Die() {
            Brain.StopThinking();
        }

        private void ResfreshObservation() {
            var worldState = Agenthost.getWorldState();
            Console.WriteLine("Start observation");
            do {
                if (worldState.number_of_observations_since_last_state > 0) {
                    var observationText = worldState.observations.Last()?.text;
                    var fullStats = JsonConvert.DeserializeObject<FullStatsModel>(observationText);
                    Life = fullStats.Life;
                    Food = fullStats.Food;
                    Xp = fullStats.XP;
                    Air = fullStats.Air;
                    Position = new PlayerPosition(fullStats.XPos, fullStats.YPos, fullStats.ZPos, fullStats.Yaw, fullStats.Pitch);
                    IsAlive = fullStats.IsAlive;
                    Eyes.Refresh(observationText);
                }
                Thread.Sleep(1000 / 10);
                worldState = Agenthost.getWorldState();
                IsOnMission = worldState.is_mission_running;
            } while (IsOnMission);
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

        /// <summary>
        /// Navigate to coordinate
        /// </summary>
        /// <param name="coordinate">coordinate to reach</param>
        public void GoTo(Coordinate coordinate) {

        }
    }
}