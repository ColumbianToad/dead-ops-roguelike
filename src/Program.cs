/* 
FILE NAME: Program.cs
AUTHOR: Callum Todd
DATE: 12/04/2023

This is the entry point for the game
*/
using DeadOpsRogueLike.Core;

namespace DeadOpsRogueLike
{
    internal static class Program
    {
        [System.STAThread]
        static void Main(string[] args)
        {
            var game = new GameApp(); // Calls GameApp.cs located in ../src/Core
            game.Run();
        }
    }
}