#include <iostream>
#include <algorithm>

using namespace std;

void solidSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << "* ";
        cout << "\n";
    }
}

void halfTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) 
            cout << "* ";
        cout << "\n";
    } 
}

void numberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << "\n";
    }
}

void numberTriangle2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << i << " ";
        cout << "\n";
    }
}

void invertedTriangle(int n) { 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i); j++) 
            cout << "* ";
        cout << "\n";
    }
}

void numberInvertedTriangle(int n) { 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - i + 1); j++)
            cout << j << " ";
        cout << "\n";
    }
}

void pyramid(int n) {
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < n - i - 1; j++) 
            cout << "  ";

        // star
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "* ";

        // space
        for (int j = 0; j < n - i - 1; j++) 
            cout << "  ";

        cout << "\n";
    }
}

void invertedPyramid(int n) {
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < i; j++)
            cout << "  ";
        
        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
            cout << "* ";

        // space
        for (int j = 0; j < i; j++)
            cout << "  "; 

        cout << "\n";
    }
}

void diamond(int n) {
    pyramid(n);
    invertedPyramid(n);
}

void halfdiamond(int n) {
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
            cout << "* ";

        cout << "\n";
    }
}

void binaryNumberTriangle(int n) {
    int start = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) start = 1;
        else start = 0;
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << "\n";
    }
}

void numberCrown(int n) {
    int space = 2 * (n - 1);
    for (int i = 1; i <=  n; i++) {
        // numbers
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        // space
        for (int j = 1; j <= space; j++)
            cout << "  ";

        // numbers
        for (int j = i; j >= 1; j--)
            cout << j << " ";

        cout << "\n";
        space -= 2;
    }
}

void floydTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num += 1;
        }
        cout << "\n";
    }
}

void incLetterTriangle(int n) {
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
}

void incLetterTriangle2(int n) {
    for (int i = 0; i <= n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << "\n";
    }
}

void revLetterTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
            cout << ch << " ";
        cout << "\n";
    }
}

void alphaRamp(int n) {
    for (int i = 0; i < n; i++) {
        char ch = (char) ('A' + i);
        for (int j = 0; j <= i; j++)
            cout << ch << " ";
        cout << "\n";
    }
}

void alphaHill(int n) {
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < n - i - 1; j++) 
            cout << "  ";

        // character
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch << " ";
            if (j <= breakpoint) ch++;
            else ch--;
        }

        // space
        for (int j = 0; j < n - i - 1; j++) 
            cout << "  ";

        cout << "\n";
    }
}

void alphaTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = (char)('E' - i); ch <= 'E'; ch++)
            cout << ch << " ";
        cout << "\n";
    }
}

void symmetricVoid(int n) {
    int iniS = 0;
    // upper part
    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 1; j <= n - i; j++) 
            cout << "* ";

        // spaces
        for (int j = 0; j < iniS; j++)
            cout << "  ";

        // stars
        for (int j = 1; j <= n - i; j++) 
            cout << "* ";

        iniS += 2;
        cout << "\n";
    }

    // lower part
    iniS = 2 * n - 2;
    for (int i = 1; i <= n; i++) {
        // stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        // spaces
        for (int j = 0; j < iniS; j++)
            cout << "  ";

        //stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        iniS -= 2;
        cout << "\n";
    }
}

void butterfly(int n) {
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) stars = 2 * n - i;

        // stars
        for (int j = 1; j <= stars; j++) 
            cout << "* ";

        // space
        for (int j = 1; j <= spaces; j++) 
            cout << "  ";

        // stars
        for (int j = 1; j <= stars; j++) 
            cout << "* ";

        cout << "\n";

        if (i < n) spaces -= 2;
        else spaces += 2;
    } 
}

void hollowSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
}

void concentricNumberSquare(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i, left = j, right = (2 * n - 2) - j, down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
        cout << "\n";
    }
}

void invertedAndRotatedHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int s = 1; s <= n - i; s++)
            cout << "  ";

        // stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        cout << "\n";
    }
}

void solidRhombus(int n) {
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int s = 1; s <= n - i; s++)
            cout << "  ";

        // stars
        for (int j = 1; j <= n; j++)
            cout << "* ";

        cout << "\n";
    }
}

void hollowRhombus(int n) {
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int s = 1; s <= n - i; s++)
            cout << "  ";

        // stars and spaces
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}

void numberPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int s = 1; s <= n - i; s++)
            cout << "  ";

        // increasing numbers
        for (int j = 1; j <= i; j++)
            cout << j << " ";

        // decreasing numbers
        for (int j = i - 1; j >= 1; j--)
            cout << j << " ";

        cout << "\n";
    }
}

void palindromicPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int s = 1; s <= n - i; s++)
            cout << "  ";

        // descending
        for (int j = i; j >= 1; j--)
            cout << j << " ";

        // ascending
        for (int j = 2; j <= i; j++)
            cout << j << " ";

        cout << "\n";
    }   
}

int main() {
    int t;
    if (cin >> t) { // test cases
        for (int i = 0; i < t; i++) {
            int n;
            cin >> n;
            
            solidSquare(n);
            cout << "\n";

            halfTriangle(n);
            cout << "\n";

            numberTriangle(n);
            cout << "\n";

            numberTriangle2(n);
            cout << "\n";

            invertedTriangle(n);
            cout << "\n";

            numberInvertedTriangle(n);
            cout << "\n";

            pyramid(n);
            cout << "\n";

            invertedPyramid(n);
            cout << "\n";

            diamond(n);
            cout << "\n";

            halfdiamond(n);
            cout << "\n";

            binaryNumberTriangle(n);
            cout << "\n";

            numberCrown(n); 
            cout << "\n";

            floydTriangle(n); 
            cout << "\n";

            incLetterTriangle(n); 
            cout << "\n";

            incLetterTriangle2(n); 
            cout << "\n";

            revLetterTriangle(n); 
            cout << "\n";

            alphaRamp(n); 
            cout << "\n";

            alphaHill(n); 
            cout << "\n";

            alphaTriangle(n); 
            cout << "\n";

            symmetricVoid(n); 
            cout << "\n";

            butterfly(n);
            cout << "\n";

            hollowSquare(n);
            cout << "\n";

            concentricNumberSquare(n); 
            cout << "\n";

            invertedAndRotatedHalfPyramid(n);
            cout << "\n";

            solidRhombus(n); 
            cout << "\n";

            hollowRhombus(n); 
            cout << "\n";

            numberPyramid(n); 
            cout << "\n";

            palindromicPyramid(n); 
        }
    }
    return 0;
}