#include<bits/stdc++.h>
using namespace std;

int main() {
    // Short Integer - short 2B -32768 to 32767
    short a = 5;
    cout << a << endl;

    // Unsigned Short Integer - unsigned short 2B 0 to 65535
    unsigned short b = 5;
    cout << b << endl;

    // Integer - int 4B -2147483648 to 2147483647 -10^9 to 10^9
    int c = 5;
    cout << c << endl;

    // Long Integer - long 4B -9223372036854775808 to 9223372036854775807 -10^12 to 10^12
    long d = 5;
    cout << d << endl;

    // Unsigned Long Integer - unsigned long 4B 0 to 18446744073709551615
    unsigned long e = 5;
    cout << e << endl;

    // Long Long Integer - long long 8B -9223372036854775808 to 9223372036854775807 -10^18 to 10^18
    long long f = 5;
    cout << f << endl;

    // Float - float 4B 1.2E-38 to 3.4E+38
    float g = 5.5;
    cout << g << endl;

    // Double - double 8B 2.3E-308 to 1.7E+308
    double h = 5.55;
    cout << h << endl;

    // Long Double - long double 16B 3.4E-4932 to 1.1E+4932
    long double i = 5.555;
    cout << i << endl;

    // Character - char 1B
    char k = 'A';
    cout << k << endl;

    // Boolean - bool 1B
    bool l = true;
    cout << l << endl;

    string str = "Hello";
    cout << str << endl;

    string m;
    cin >> m;
    cout << m << endl;

    string n1, n2;
    cin >> n1 >> n2;
    cout << n1 << " " << n2 << endl;

    string o;
    getline(cin, o); // to take input with spaces till the line breaks
    cout << o << endl;

    return 0;
}