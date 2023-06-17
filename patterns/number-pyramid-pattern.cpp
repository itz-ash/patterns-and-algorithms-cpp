#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the pattern
  cout << "Enter the size of the pattern: ";
  int size;
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    // Print the spaces
    for (int j = 0; j < size - i - 1; j++)
    {
      cout << " ";
    }
    // Print the numbers5`
    for (int k = 0; k < 2 * i + 1; k++)
    {
      // Print the number (k+1)
      cout << (k + 1);
    }
    cout << "\n";
  }
  return 0;
}
