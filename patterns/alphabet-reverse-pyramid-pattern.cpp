#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the pattern
  cout << "Enter the size of the pattern: ";
  int size;
  cin >> size;

  int startChar = 65; // ASCII value of 'A'

  // Loop to print the pattern
  for (int i = 0; i < size; i++)
  {
    // Print spaces
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }

    // Print alphabets
    for (int k = 0; k < 2 * (size - i) - 1; k++)
    {
      cout << (char)(startChar + k);
    }

    cout << "\n";
  }

  return 0;
}
