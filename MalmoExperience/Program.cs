// --------------------------------------------------------------------------------------------------
//  Copyright (c) 2016 Microsoft Corporation
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
//  associated documentation files (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge, publish, distribute,
//  sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in all copies or
//  substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
//  NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
//  DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
// --------------------------------------------------------------------------------------------------

using System;
using System.IO;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.Research.Malmo;
using RunMission.Framework;
using RunMission.Framework.Utils;

class Program {
    public static void Main() {
        AgentHost agentHost = new AgentHost();
        try {
            agentHost.parse(new StringVector(Environment.GetCommandLineArgs()));
        } catch (Exception ex) {
            Console.Error.WriteLine("ERROR: {0}", ex.Message);
            Console.Error.WriteLine(agentHost.getUsage());
            Environment.Exit(1);
        }
        if (agentHost.receivedArgument("help")) {
            Console.Error.WriteLine(agentHost.getUsage());
            Environment.Exit(0);
        }

        // Generate Mission
        var missionXml = string.Empty;
        using (var stream = new StreamReader("default.xml")) {
            missionXml = stream.ReadToEnd();
        }
        MissionSpec mission = new MissionSpec(missionXml, true);


        // Config Record
        MissionRecordSpec missionRecord = new MissionRecordSpec("./saved_data.tgz");
        missionRecord.recordCommands();
        missionRecord.recordRewards();
        missionRecord.recordObservations();

        Body body = null;
        // Start Mission
        try {
            body = agentHost.StartMissionAdvanced(mission, missionRecord);
        } catch (Exception ex) {
            Console.Error.WriteLine("Error starting mission: {0}", ex.Message);
            Environment.Exit(1);
        }

        WorldState worldState;

        // Wait Minecraft
        Console.WriteLine("Waiting for the mission to start");
        do {
            Console.Write(".");
            Thread.Sleep(100);
            worldState = agentHost.getWorldState();

            foreach (TimestampedString error in worldState.errors) Console.Error.WriteLine("Error: {0}", error.text);
        } while (!worldState.is_mission_running);

        body.Born();
        // insert life here !
	    Task.WaitAll(body.Die());
        Console.WriteLine("Mission has stopped.");
    }
}