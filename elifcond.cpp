#include<iostream>
using namespace std;

int main() {

    int m1, m2, m3, m4, m5, m6;

    cout << "Enter English marks: ";
    cin >> m1;

    cout << "Enter Physics marks: ";
    cin >> m2;

    cout << "Enter Chemistry marks: ";
    cin >> m3;

    cout << "Enter Maths marks: ";
    cin >> m4;

    cout << "Enter Biology marks: ";
    cin >> m5;

    cout << "Enter Computer marks: ";
    cin >> m6;

    // Calculate total AFTER input
    float marks = m1 + m2 + m3 + m4 + m5 + m6;
    float percentage = marks / 6;

    cout << "\nPercentage: " << percentage << "%" << endl;

    // Proper grading
    if (percentage >= 90) {
        cout << "Grade A";
    }
    else if (percentage >= 80) {
        cout << "Grade B";
    }
    else if (percentage >= 70) {
        cout << "Grade C";
    }
    else if (percentage >= 60) {
        cout << "Grade D";
    }
    else if (percentage >= 50) {
        cout << "Grade E";
    }
    else if (percentage >= 40) {
        cout << "Grade P";
    }
    else {
        cout << "Fail";
    }

    return 0;
}