#include<bits/stdc++.h>
using namespace std;

int main() {    
    string str = "Hello";
    int len = str.size();
    str[len-1] = 'z';
    cout << str[len-1] << endl;

    return 0;
}