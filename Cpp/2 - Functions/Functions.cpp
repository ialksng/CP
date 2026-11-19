#include<bits/stdc++.h>
using namespace std;

// void - does not return anything | non - parameterized
void greet(){
    cout<<"Hello, Alok!"<<endl;
}

// parameterized
void printName(string name) {
    cout << name << endl;
}

int printSum(int num1, int num2){
    return num1 + num2;
}

int maxx(int num1, int num2) {
    if (num1 >= num2) return num1;
    return num2;
}

void doSomething(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

void changeName(string &s) { // work with original s
    s[0] = 't';
    cout << s << endl;
}

void arrayy(int arr[], int n) {
    arr[0] += 100;
    cout << arr[0] << endl;
}

int main(){
    greet();

    string name = "Alok";
    printName(name);

    /*  Take 2 number and print its sum */
    int num1, num2;
    cout << "Enter numbers:";
    cin >> num1 >> num2;

    cout << printSum(num1, num2);
    cout << min(num1, num2);
    cout << maxx(num1, num2);

    // Pass by value
    int num = 10;
    doSomething(num); // a copy of this goes
    cout << num << endl;


    // Pass by reference
    string s = "raj";
    changeName(s);
    cout << s << endl;

    // arrays are pass by reference
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    arrayy(arr, n);

    cout << arr[0] << endl;
    
    return 0;
}