using System;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;

namespace RunMission.Framework {
    public class Brain {
        protected readonly Body Body;
        protected readonly Eyes Eyes;
        private Task _brainActivity;
	    private CancellationTokenSource _cancellationTokenSource;

	    public Brain(Body body, Eyes eyes) {
            Body = body;
            Eyes = eyes;
        }

        public void StartToThink() {
	        _cancellationTokenSource = new CancellationTokenSource();
	        _brainActivity = Task.Run(DeepThought, _cancellationTokenSource.Token);
        }

        public async Task StopThinking() {
			_cancellationTokenSource.Cancel();
	        await _brainActivity;
        }

        private Task DeepThought() {
            while (Body.IsOnMission) {
	            if (_cancellationTokenSource.Token.IsCancellationRequested) {
		            return Task.FromResult(0);
	            }
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
	        return Task.FromResult(0);
        }
    }
}