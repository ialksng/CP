/*
    Insertion Sort:
        Pick an element from the unsorted array and insert it into its
   correct position in the sorted part of the array.

        Time Complexity: O(n^2)  // worst & average case
                         O(n)   // best case - only when array is sorted
        Space Complexity: O(1)   // in-place sorting algorithm

        When to Use?
            - Best for very small arrays
            - Worst-case scenario is rare
            - When memory is extremely limited
*/

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j <= i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  insertion_sort(arr, n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}

// g++ "bubble_sort.cpp" -o "bubble_sort.exe"; .\bubble_sort.exe