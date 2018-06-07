#include "gameBoard.hpp"

GameBoard::GameBoard()
{
  sidelength = 9;
  this->data = new int*[sidelength];
  for (int i = 0; i < sidelength; i++)
  {
    this->data[i] = new int[sidelength];
    for (int j = 0; j < sidelength; j++)
    {
      data[i][j] = 0;
    }
  }
  data[0][2] = 7;
  data[0][5] = 1;
  data[0][6] = 3;
  data[1][0] = 3;
  data[1][4] = 5;
  data[1][6] = 6;
  data[2][0] = 5;
  data[2][2] = 8;
  data[2][4] = 3;
  data[2][8] = 4;
  data[3][1] = 8;
  data[3][4] = 6;
  data[3][6] = 9;
  data[4][0] = 7;
  data[4][8] = 6;
  data[5][2] = 4;
  data[5][4] = 1;
  data[5][7] = 7;
  data[6][0] = 2;
  data[6][4] = 8;
  data[6][6] = 4;
  data[6][8] = 3;
  data[7][2] = 6;
  data[7][4] = 7;
  data[7][8] = 8;
  data[8][2] = 5;
  data[8][3] = 9;
  data[8][6] = 7;
}

GameBoard::~GameBoard()
{
  for (int i = 0; i < sidelength; i++)
  {
    delete[] data[i];
  }
  delete[] data;
}

void GameBoard::print()
{
  for (int i = 0; i < sidelength*2+1; i++)
  {
    for (int j = 0; j < sidelength+1; j++)
    {
      if ((i % 2) == 0)
      {
        if ((i % 3) == 0)
          std::cout << "==";
        else if (j != 0)
        {
          std::cout << "--";
        }
      }
      else
      {
        std::cout << "|";
        if (j != sidelength)
          std::cout << data[i/2][j];
      }
    }
    std::cout << std::endl;
  }
}

void GameBoard::generateCols()
{
  for (int i = 0; i < sidelength; i++)
  {
    for (int j = 0; j < sidelength; j++)
    {
      col[i][j] = data[j][i];
    }
  }
}

void GameBoard::generateRows()
{
  for (int i = 0; i < sidelength; i++)
  {
    for (int j = 0; j < sidelength; j++)
    {
      row[i][j] = data[i][j];
    }
  }
}

void GameBoard::generateBoxes()
{
  for (int k = 1; k <= 3; k++)
  {
    for (int i = 0; i < sidelength; i++)
    {
      for (int j = 0; j < sidelength; j++)
      {
        box[]
      }
    }
  }
}

void GameBoard::solver()
{
  int check;
  check = checkBoard();
  while(check > 0)
  {

  }
}

int GameBoard::checkLine(int line)
{
  int indx = 0;
  for (int i = 0; i < sidelength; i++)
  {
    if(data[line][i] == 0)
    {
      indx += 1;
    }
  }
  return indx;
}

int GameBoard::checkBoard()
{
  int indx = 0;
  for (int i = 0; i < sidelength; i++)
  {
    indx += checkLine(i);
  }
  return indx;
}
