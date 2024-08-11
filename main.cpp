#include "raylib.h"
#include <iostream>
#include <cmath>

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "window");

    SetTargetFPS(60);

    int freq = 220;

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        for(int x = 0; x < screenWidth; ++x)
        {
            int y = screenHeight / 2 + (100 * sin(freq * x));
            DrawPixel(x, y, WHITE);

            int y2 = screenHeight / 2 + (100 * sin((freq * 2) * x));
            DrawPixel(x, y2, RED);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}