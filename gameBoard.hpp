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
    int sidelength;

  public:
    GameBoard();
    GameBoard(int);
    ~GameBoard();
    void solver();
    int checkLine(int);
    int checkBoard();
    void print();

};

#endif
