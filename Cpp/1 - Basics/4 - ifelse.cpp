#include<bits/stdc++.h>
using namespace std;

int main() {
    // If - If-Else - Nested If - Else If

    /* WAP that takes an input of age and checks if the person is eligible to vote */
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    // NOTE: else can be omitted if not required. In that case, only the if block will be executed if the condition is true.

    /* 
    A school has following rules for gradin system
       a. Below 25 - F
       b. 25 to 44 - E
       c. 45 to 49 - D
       d. 50 to 59 - C
       e. 60 to 79 - B
       f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade. 
    */
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks < 25) {
        cout << "Your grade is F." << endl;
    } else if (marks <= 44) {
        cout << "Your grade is E." << endl;
    } else if (marks <= 49) {
        cout << "Your grade is D." << endl;
    } else if (marks <= 59) {
        cout << "Your grade is C." << endl;
    } else if (marks <= 79) {
        cout << "Your grade is B." << endl;
    } else if (marks <= 100) {
        cout << "Your grade is A." << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }

    /*
    Take the age from the user and then decide accordingly
    1. If age < 18,
        print-> not eligible for job
    2. If age >= 18 and age <= 54, 
        print-> "eligble for job"
    3. If age >= 55 and age <= 57,
        print-> "eligible for job, but retirement soon."
    4. If age == 57,
        print-> "retirement time"
    */
    int age;    
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "You are not eligible for job." << endl;
    } else if (age <= 57) {
        cout << "You are eligible for job";
        if (age >= 55) {
            cout << ", but retirement soon." << endl;
        }
    } else {
        cout << "Invalid age entered." << endl;
    }

    // Switch

    /* 
    Take the day no and print the corresponding day
    for 1 print Monday,
    for 2 print Tuesday and so on.
    */
    int day;
    cout << "Enter a day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number entered." << endl;
            break;
    }

    return 0;
}