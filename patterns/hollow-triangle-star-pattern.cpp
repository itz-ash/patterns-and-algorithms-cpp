#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the triangle
  cout << "Enter the size of the triangle: ";
  int size;
  cin >> size;

  for (int row = 1; row <= size; row++)
  {
    for (int col = 0; col < row; col++)
    {
      // Not the last row
      if (row != size)
      {
        if (col == 0 || col == row - 1)
        {
          cout << "*";
        }
        else
        {
          cout << " ";
        }
      }
      // Last row
      else
      {
        cout << "*";
      }
    }
    cout << "\n";
  }
  return 0;
}
