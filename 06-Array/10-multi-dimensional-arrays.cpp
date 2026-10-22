#include <iostream>
using namespace std;

const int row = 2;
const int column = 3;

void matrixPrintFor2D(int matrix[row][column])
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
      cout << matrix[i][j] << " ";
    cout << endl;
  }
}

int main()
{

  // 2x3
  int matrix[row][column] = {
      {11, 12, 13},
      {20, 30, 30}};

  matrixPrintFor2D(matrix);

  return 0;
}