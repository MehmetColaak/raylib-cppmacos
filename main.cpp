#include "raylib.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "window");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);
        DrawText("TEST TEST TEST TEST", 130, 300, 40, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}