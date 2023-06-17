#include <iostream>
using namespace std;

int main() {
  // Prompt the user to enter the size of the pyramid
  cout << "Enter the size of the pyramid: ";
  int size;
  cin >> size;

  // Upside pyramid
  for (int i = 1; i <= size; i++) {
    // Print spaces before the stars in each row
    for (int space = size; space > i; space--) {
      cout << " ";
    }
    // Print stars in each row
    for (int star = 0; star < i * 2 - 1; star++) {
      if (star == 0 || star == (i * 2 - 2)) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }

  // Downside pyramid
  for (int i = 1; i < size; i++) {
    // Print spaces before the stars in each row
    for (int space = 0; space < i; space++) {
      cout << " ";
    }
    // Print stars in each row
    for (int star = (size - i) * 2 - 1; star >= 1; star--) {
      if (star == 1 || star == ((size - i) * 2 - 1)) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }

  return 0;
}
