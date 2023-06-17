#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the pattern
  cout << "Enter the size of the pattern: ";
  int size;
  cin >> size;

  int startingChar = 65; // ASCII value of 'A'

  for (int i = 0; i < size; i++)
  {
    // Print spaces
    for (int j = 0; j < size - i - 1; j++)
    {
      cout << " ";
    }

    // Print alphabets
    for (int k = 0; k < 2 * i + 1; k++)
    {
      cout << (char)(startingChar + k);
    }

    cout << "\n";
  }

  return 0;
}
