#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the triangle
  cout << "Enter the size of the triangle: ";
  int size;
  cin >> size;

  // Loop to print the pattern
  for (int row = 0; row < size; row++)
  {
    // Print stars in each column up to the current row
    for (int col = 0; col <= row; col++)
    {
      cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
