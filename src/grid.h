#pragma once // Avoids duplicate definations
#include <vector>
#include <raylib.h>

class Grid{
public:
    Grid();
    void Initialize(); //Initializes the grid;
    int  grid[20][10];
    void Print();
    void Draw();

private:
    int  numRols;
    int  numCols;
    int  cellSize;

    std::vector<Color> colors;
    std::vector<Color> GetCellColors();
};