#include <iostream>
using namespace std;

// Declaration pardon for the spellings
int binarySearch(int arr[], int arrSize, int key);

// Main
int main()
{
  int even[6] = {2, 4, 66, 78, 90, 98};
  int odd[5] = {3, 59, 79, 89, 93};

  int evenIndex = binarySearch(even, 6, 78);
  cout << "even index: " << evenIndex << endl;
  int oddIndex = binarySearch(odd, 5, 3);
  cout << "odd index: " << oddIndex << endl;

  return 0;
}

// Binary serach
int binarySearch(int arr[], int arrSize, int key)
{
  int start = 0;
  int end = arrSize - 1;
  int mid = (start + end) / 2;

  while (start <= end)
  {

    // if the mid value is matching to the key
    if (arr[mid] == key)
    {
      return mid;
    }

    // if the mid value is less than key
    if (key > arr[mid])
    {
      start = mid + 1;
    }

    // if the mid value is greater than key
    if (key < arr[mid])
    {
      end = mid - 1;
    }

    // new mid value
    mid = (start + end) / 2;
  }

  return -1;
}