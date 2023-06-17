#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter the size of the pyramid
  cout << "Enter the size of the pyramid: ";
  int size;
  cin >> size;

  // Reversed pyramid star pattern
  for (int i = 0; i < size; i++)
  {
    // Print spaces before the stars in each row
    for (int space = 0; space < i; space++)
    {
      cout << " ";
    }
    // Print stars in each row
    for (int star = 0; star < (size - i) * 2 - 1; star++)
    {
      cout << "*";
    }
    cout << "\n";
  }

  // Pyramid star pattern
  for (int i = 2; i <= size; i++)
  {
    // Print spaces before the stars in each row
    for (int space = size; space > i; space--)
    {
      cout << " ";
    }
    // Print stars in each row
    for (int star = 0; star < i * 2 - 1; star++)
    {
      cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
