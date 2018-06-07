#ifndef _GAMEBOARD_HPP
#define _GAMEBOARD_HPP

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>

class GameBoard
{
  private:
    int** data;
    int row[9][9];
    int col[9][9];
    int box[9][9];
    int sidelength;

  public:
    GameBoard();
    GameBoard(int);
    ~GameBoard();
    void solver();
    int checkLine(int);
    int checkBoard();
    void print();
    void generateRows();
    void generateCols();
    void generateBoxes();

};

#endif
