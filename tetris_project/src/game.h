#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    bool gameOver;
    int score;

private:
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    void MoveBlockLeft();
    void MoveBlockRight();
    bool BlockFits();
    void Reset();
    void UpdateScore(int LinesCleared, int moveDownPoints);
    Grid grid;
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};