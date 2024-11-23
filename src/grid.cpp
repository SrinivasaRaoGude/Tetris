// Implemations of grid
#include "grid.h"
#include <iostream>

Grid::Grid()
{
    numRols  = 20;
    numCols  = 10;
    cellSize = 30;
    colors   = GetCellColors();
    Initialize();
}

void Grid::Initialize()
{
    // Initialize Each Cell to 0
    for (int row = 0; row < numRols; row++) {
        for (int col = 0; col < numCols; col++) {
            grid[row][col] = 0;
        }
    }
}

// Print() can be used to see state of a grid
void Grid::Print() {  
    for (int row = 0; row < numRols; row++) {
        for (int col = 0; col < numCols; col++) {
            std::cout << grid[row][col];
        }
        std::cout << std::endl;
    }
}

std::vector<Color> Grid::GetCellColors(){
    //Color name   = { R ,  G ,  B ,  A }
    Color darkGray = { 26,  31,  40, 255};
    Color green    = { 47, 230,  23, 255};
    Color red      = {232,  18,  18, 255};
    Color orange   = {226, 116,  17, 255};
    Color yellow   = {237, 234,   4, 255};
    Color purple   = {166,   0, 247, 255};
    Color cyan     = { 21, 204, 209, 255};
    Color blue     = { 13,  64, 216, 255};

    return {darkGray, green, red, orange, yellow, purple, cyan, blue};
    //Index Corresponds to Block ID
}

void Grid::Draw(){
    for (int row = 0; row < numRols; row++) {
        for (int col = 0; col < numCols; col++) {
            int cellValue = grid[row][col];
            //DrawRectangle(x, y, w, h, color);
            DrawRectangle(col * cellSize+1, row * cellSize+1, cellSize-1, cellSize-1, colors[cellValue]);
        }
    }
}