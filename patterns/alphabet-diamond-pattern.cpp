#include <iostream>
using namespace std;

int main()
{
  int size;

  cout << "Enter the size of the pattern: ";
  cin >> size;

  int alpha = 65; // ASCII value of 'A'
  int num = 0;    // Variable to keep track of alphabet increment

  // Upside pyramid
  for (int i = 1; i <= size; i++)
  {
    // Printing spaces
    for (int j = size; j > i; j--)
    {
      cout << " ";
    }
    // Printing alphabets
    for (int k = 0; k < i * 2 - 1; k++)
    {
      cout << (char)(alpha + num++);
    }
    // Reset the number to 0
    num = 0;
    cout << "\n";
  }

  // Downside pyramid
  for (int i = 1; i <= size - 1; i++)
  {
    // Printing spaces
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // Printing alphabets
    for (int k = (size - i) * 2 - 1; k > 0; k--)
    {
      cout << (char)(alpha + num++);
    }
    // Reset num to 0
    num = 0;
    cout << "\n";
  }

  return 0;
}
