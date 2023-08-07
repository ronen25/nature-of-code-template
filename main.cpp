#include <raylib.h>

int main() {
    const int width = 800;
    const int height = 600;

    InitWindow(width, height, "Raylib window");
    SetTargetFPS(GetMonitorRefreshRate(0));

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("First window!", 190, 200, 20, GREEN);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
