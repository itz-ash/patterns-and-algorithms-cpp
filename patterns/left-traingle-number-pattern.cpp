#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the pattern
  cout << "Enter the size of the pattern: ";
  int size;
  cin >> size;

  // Loop to print the pattern
  for (int i = 0; i < size; i++)
  {
    // Print the numbers in each column
    for (int j = 0; j <= i; j++)
    {
      // Print the number (j+1)
      cout << (j + 1) << " ";
    }
    cout << "\n";
  }
  return 0;
}
