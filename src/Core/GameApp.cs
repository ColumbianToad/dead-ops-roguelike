using Raylib_cs;
using DeadOpsRogueLike.Scenes;
using DeadOpsRogueLike.Core;

namespace DeadOpsRogueLike.Core
{
    public class GameApp
    {
        private const int screenWidth = 800;
        private const int screenHeight = 450;

        public void Run()
        {
            Initialise();


            while (!Raylib.WindowShouldClose())
            {
                Update();
                Draw();
            }

            Shutdown();
        }

        public void Initialise()
        {
            // Initialise game

            Raylib.InitWindow(screenWidth, screenHeight, "Dead Ops Rogue Like");

            Raylib.SetTargetFPS(60);
        }

        public void Update()
        {
            // Update game
        }

        public void Draw()
        {
            Raylib.BeginDrawing();
            Raylib.ClearBackground(Color.White);
            Raylib.DrawText("Hello, World!", 190, 200, 20, Color.Blue);
            Raylib.EndDrawing();
        }

        public void Shutdown()
        {
            Raylib.CloseWindow();
        }
    }
}