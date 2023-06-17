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
    // Print spaces before the stars in each row
    for (int space = 1; space < size - row; space++)
    {
      cout << " ";
    }
    // Print stars in each row
    for (int star = 0; star <= row; star++)
    {
      cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
