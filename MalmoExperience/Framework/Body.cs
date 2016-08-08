using System;
using System.Linq;
using System.Numerics;
using System.Threading;
using System.Threading.Tasks;
using MathNet.Numerics;
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

        public Task Die() {
            return Brain.StopThinking();
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

        private double GetAngleFrom(Coordinate coordinate) {
            var playerToTarget = new Vector3(coordinate.X - Position.X, coordinate.Y - Position.Y, coordinate.Z - Position.Z);
            double angle;
            if (playerToTarget.X == 0) {
                angle = playerToTarget.Z < 0 ? Math.PI : 0;
            } else if (playerToTarget.Z == 0) {
                angle = playerToTarget.X < 0 ? Math.PI / 2 + Math.PI : Math.PI / 2;
            } else {
                angle = Math.Atan2(playerToTarget.X, playerToTarget.Z);
            }
            return Math.Abs(Trig.RadianToDegree(angle) - (360 - Position.Yaw)) % 360;
        }

        /// <summary>
        /// Navigate to coordinate
        /// </summary>
        /// <param name="coordinate">coordinate to reach</param>
        public Task GoTo(Coordinate coordinate) {
            return Task.Run(() => {
                var reachDestination = false;
                var center = coordinate.Center();
                do {
                    Console.WriteLine("#########################");
                    Console.WriteLine($"Player Information => ({Position.X}, {Position.Y}, {Position.Z})Yaw:{Position.Yaw}");
                    var playerToTarget = new Vector3(center.X - Position.X, center.Y - Position.Y, center.Z - Position.Z);
                    double angle;
                    if (playerToTarget.X == 0) {
                        angle = playerToTarget.Z < 0 ? Math.PI : 0;
                    } else if (playerToTarget.Z == 0) {
                        angle = playerToTarget.X < 0 ? Math.PI / 2 + Math.PI : Math.PI / 2;
                    } else {
                        angle = Math.Atan2(playerToTarget.X, playerToTarget.Z);
                    }
                    var computedAngle = Math.Abs(Trig.RadianToDegree(angle) - (360 - Position.Yaw))%360;
                    double strength;
                    if (computedAngle > 180) {
                        strength = ((360 - computedAngle) * -1) / 180;
                    } else {
                        strength = computedAngle / 180;
                    }
                    Console.WriteLine($"Angle: {angle} :: {Trig.RadianToDegree(angle)}");
                    Console.WriteLine($"Angle Computed: {computedAngle}");
                    Console.WriteLine($"Strength: {strength}");
                    Console.WriteLine("#########################");
                    Console.WriteLine();
                    Turn(strength);
                    if (strength < 0.1f) {
                        Move(1 - strength);
                    }
                    Thread.Sleep(250);
                } while (!reachDestination);

            });
        }

        public Task GoInRangeOf(BlockOrItem blockOrItem) {
            return Task.Run(() => {
                var center = blockOrItem.Center();
                do {
                    var computedAngle = GetAngleFrom(center);
                    double strength;
                    if (computedAngle > 180) {
                        strength = ((360 - computedAngle) * -1) / 180;
                    } else {
                        strength = computedAngle / 180;
                    }
                    Turn(strength);
                    if (strength < 0.1f) {
                        Move(1 - strength);
                    }
                    else {
                        Move(0);
                    }
                    Thread.Sleep(250);
                } while (!Eyes.IsInRangeOf(blockOrItem));
                Move(0);
                Turn(0);
            });
        }

        #region Api Command
        protected void Turn(double strength) {
            Agenthost.sendCommand($"turn {strength}");
        }

        protected void Move(double strength) {
            Agenthost.sendCommand($"move {strength}");
        }
        #endregion
    }
}