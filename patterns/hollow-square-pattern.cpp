#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the square
  cout << "Enter the size of the square: ";
  int size;
  cin >> size;

  // Outer loop for rows
  for (int row = 0; row < size; row++)
  {
    // Inner loop for columns
    for (int col = 0; col < size; col++)
    {
      // Print only star in first and last row
      if (row == 0 || row == size - 1)
      {
        cout << "*";
      }
      else
      {
        // Print star only at first and last position in each row
        if (col == 0 || col == size - 1)
        {
          cout << "*";
        }
        else
        {
          cout << " ";
        }
      }
    }
    cout << "\n";
  }

  return 0;
}
