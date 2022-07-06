#include "raylib.h"
#define MY_COLOR        CLITERAL(Color){ 157, 214, 36, 0 }
int main() {

    const int init_width = 800;
    const int init_height = 450;
    const char* init_title_text = "Simple Windows";

    Color color;

    InitWindow(init_width, init_height, init_title_text);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(MY_COLOR);
        EndDrawing();
    }

    CloseWindow();
 }
