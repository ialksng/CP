/*
    Selection Sort:
        Scan the unsorted part of the array to find the absolute smallest item,
   then swap it to the front. Move one spot to the right and repeat.

        Time Complexity: O(n^2) // always
        Space Complexity: O(1) // in-place sorting algorithm

        However, it makes the absolute minimum number of swaps (at most N-1
   swaps)
*/

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) { // i<=n-2
    int mini = i;
    for (int j = i + 1; j <= n - 1; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[mini];
    arr[mini] = temp;
  }
}
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  selection_sort(arr, n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}

// to run
// g++ "selection_sort.cpp" -o "selection_sort.exe"; .\selection_sort.exe
