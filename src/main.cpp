#include "raylib.h"

int main() {
    // Window Set Up
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Project Rogue-Arena");
    SetTargetFPS(60);

    // Player Data
    Vector2 playerPos = {screenWidth / 2.0f, screenHeight / 2.0f};
    float playerSpeed = 200.0f;
    float playerRadius = 20.0f;

    // Game Loop
    while (!WindowShouldClose()) {
        // Get Delta Time (for frame-independant movement)
        float deltaTime = GetFrameTime();

        // Player Input
        if (IsKeyDown(KEY_W)) {
            playerPos.y -= playerSpeed * deltaTime;
        }
        if (IsKeyDown(KEY_S)) {
            playerPos.y += playerSpeed * deltaTime;
        }
        if (IsKeyDown(KEY_A)) {
            playerPos.x -= playerSpeed * deltaTime;
        }
        if (IsKeyDown(KEY_D)) {
            playerPos.x += playerSpeed * deltaTime;
        }

        // Keep Player in Bounds
        if (playerPos.x < playerRadius) {
            playerPos.x = playerRadius;
        }
        if (playerPos.x > screenWidth - playerRadius) {
            playerPos.x = screenWidth - playerRadius;
        }
        if (playerPos.y < playerRadius) {
            playerPos.y = playerRadius;
        }
        if (playerPos.y > screenHeight - playerRadius) {
            playerPos.y = screenHeight - playerRadius;
        }

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangleLines(40, 40, screenWidth, screenHeight, GRAY);
        DrawCircleV(playerPos, playerRadius, BLUE);
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}