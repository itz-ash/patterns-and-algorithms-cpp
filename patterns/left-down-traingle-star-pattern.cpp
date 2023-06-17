#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the triangle
  cout << "Enter the size of the triangle: ";
  int size;
  cin >> size;

  for (int row = 0; row < size; row++)
  {
    // Print stars in each row, decreasing from the maximum size
    for (int star = 0; star < size - row; star++)
    {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}
