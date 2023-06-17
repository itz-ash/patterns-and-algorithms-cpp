#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the pattern
  cout << "Enter the size of the pattern: ";
  int size;
  cin >> size;

  int num = 1;
  // Upside pyramid
  for (int i = 1; i <= size; i++)
  {
    // Print spaces
    for (int j = size; j > i; j--)
    {
      cout << " ";
    }
    // Print numbers
    for (int k = 0; k < i * 2 - 1; k++)
    {
      cout << num++;
    }
    // Reset num to 1
    num = 1;
    cout << "\n";
  }

  // Downside pyramid
  for (int i = 1; i <= size - 1; i++)
  {
    // Print spaces
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // Print numbers
    for (int k = (size - i) * 2 - 1; k > 0; k--)
    {
      cout << num++;
    }
    // Reset num to 1
    num = 1;
    cout << "\n";
  }

  return 0;
}
