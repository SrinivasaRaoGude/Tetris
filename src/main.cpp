#include <raylib.h>
#include "grid.h"
int main() 
{
    //Definitions
    Color darkBlue = {44, 44, 127, 255};    // strut Color = { R, G, B, A}
    InitWindow(300, 600, "Raylib Tetris");  // Initialize Window of 300 x 600
    SetTargetFPS(60);                       // Defines How Fast the Program should run

    Grid grid = Grid();
    
    //For Debug

    grid.Print();
    //Game Loop
    while (!WindowShouldClose()) { // WindowsShouldClose() returns TRUE if Escape key or Close icon is pressed 
        BeginDrawing();            // Creates Blank Canvas
        ClearBackground(darkBlue); // Clears the window background with 'darkBule'
        grid.Draw();               // Draws each cell with its representive color
        EndDrawing();              // Ends Canvas Drawing
    }
    
    CloseWindow();
}