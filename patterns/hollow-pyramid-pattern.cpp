#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the pyramid
  cout << "Enter the size of the pyramid: ";
  int size;
  cin >> size;

  for (int row = 0; row < size; row++)
  {
    // Print spaces before the stars in each row
    for (int space = 0; space < size - row - 1; space++)
    {
      cout << " ";
    }
    // Print stars in each row
    for (int star = 0; star < 2 * row + 1; star++)
    {
      if (row == 0 || row == size - 1)
      {
        cout << "*";
      }
      else
      {
        if (star == 0 || star == 2 * row)
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
