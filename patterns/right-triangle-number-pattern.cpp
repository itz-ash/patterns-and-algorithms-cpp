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
    // Print the spaces
    for (int j = 1; j < size - i; j++)
    {
      cout << " ";
    }
    // Print the numbers in each row
    for (int k = 0; k <= i; k++)
    {
      // Print the number (k+1)
      cout << (k + 1);
    }
    cout << "\n";
  }
  return 0;
}
