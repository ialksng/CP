/*
STL - Standard Template Library
    1. Algorithms
    2. Containers
    3. Functions
    4. Iterators
*/
// compile - g++ "1-Pairs.cpp" -o ".\bin\1-Pairs.exe"
// run - .\bin\1-Pairs.exe

#include<bits/stdc++.h>
using namespace std;

int main() {
    return 0;
}

void explainPair() { // resides in utlity lib
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl; // 1 3

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; // 1 4 3

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl; // 5
}