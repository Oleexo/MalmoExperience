using System;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;

namespace RunMission.Framework {
    public class Brain {
        protected readonly Body Body;
        protected readonly Eyes Eyes;
        private Task _brainActivity;

        public Brain(Body body, Eyes eyes) {
            Body = body;
            Eyes = eyes;
        }

        public void StartToThink() {
            _brainActivity = Task.Factory.StartNew(DeepThought);
        }

        public void StopThinking() {
        }

        private void DeepThought() {
            while (Body.IsOnMission) {
                Console.WriteLine("Looking for wood");
                while (!Eyes.See("log")) {
                    Thread.Sleep(100);
                }
                // Go to wood
                if (Eyes.See("log")) {
                    var woods = Eyes.WhereIs("log");
                    var wood = woods.FirstOrDefault(o => o.Y == Body.Position.Y + 1.0);
                    Console.WriteLine($"Go to: {wood}");
                    Body.GoTo(wood);
                }
                Thread.Sleep(100);
            }
        }
    }
}