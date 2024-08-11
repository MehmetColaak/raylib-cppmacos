#include "raylib.h"
#include <iostream>
#include <cmath>

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

        for(float angle = 0; angle < 2 * PI; angle += 0.1)
        {
            int x = screenWidth / 2 + (100 * cos(angle));
            int y = screenHeight / 2 + (100 * sin(angle));
            DrawPixel(x, y, WHITE);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}