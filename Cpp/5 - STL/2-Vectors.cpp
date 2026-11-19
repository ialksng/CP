#include<bits/stdc++.h>
using namespace std;

void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // faster

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}
    vector<int> v2(5); //  {0, 0, 0, 0, 0} or {5345, 345, 3534, 5252, 542} depends on compiler
    // size will be dynamically increase when a new item will be inserted

    vector<int> v3(5, 20); // {20, 20, 20, 20, 20}
    vector<int> v4(v3); // v4 is a copy of v3

    // access
    vector<int> v5 = {1, 2, 3, 4, 5};

    // 1st way
    cout << v5[0] << " " << v5.at(2) << endl; // 1 3
    // .at() is rarely used

    // 2nd way : iterator
    vector<int>::iterator it = v5.begin();
    // .begin() will point mmry addr of 1st ele

    it++;
    cout << *(it) << " "; // 2

    it = it+2;
    cout << *(it) << endl; // 4

    vector<int>::iterator it2 = v5.end(); //.end() will point right after the last element & if you do it-- then it will go from back to begining
    vector<int>::reverse_iterator it3 = v5.rend(); // point before first element
    vector<int>::reverse_iterator it4 = v5.rbegin(); // points to last element and it++ moves towards the begining

    cout << v5.back() << endl; // 5

    // print 
    // loop

    // iterator
    for(vector<int>::iterator it = v5.begin(); it != v5.end(); it++) {
        cout << *(it) << " ";
    }

    // shortcut
    for(auto it = v5.begin(); it != v5.end(); it++) {
        cout << *(it) << " ";
    }

    // for each loop
    for(auto it : v5) {
        cout << it << " ";
    }

    // delete 
    




}