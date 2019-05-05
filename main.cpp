// Author: Ford Tennis
// Program: main
// Description: This program accepts, sorts, and prints ten integers
// Sources: None

#include <iostream>

using namespace std;

void sort(int array[], int length);

int main() {

  int SIZE = 10;
  int array[SIZE];
  // Prompt for input
  cout << "Enter ten integers. \n\n";
  for (int i = 0; i < SIZE; i++) {
    cin >> array[i];
  }
  // Echo input
  cout << "\nYou entered: ";
  for (int i = 0; i < SIZE; i++) {
    cout << array[i] << " ";
  }

  sort(array, SIZE);
  // Echo sorted input
  cout << "\n\nSorted: ";
  for (int i = 0; i < SIZE; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  return 0;
}

void sort(int array[], int length) {
  // Declarations for index, smallest element, position in array, and swapping
  int i = 0;
  int minIndex = 0;
  int place = 0;
  int swap = 0;

  for (i = 0; i < length - 1; i++) {
    minIndex = i;
    // Make smallest element current position equal to smallest index if value
    // of current position's element is less than smallest index. Iterate over
    // length of array.
    for (place = i + 1; place < length; place++) {
      if (array[place] < array[minIndex]) {
        minIndex = place;
      }
      swap = array[minIndex];
      array[minIndex] = array[i];
      array[i] = swap;
    }
  }
}
