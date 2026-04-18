#include<iostream>
using namespace std;

int main() {
    
    // Variable Declaration
    int age;
    float pi;
    double number;
    char vowel;
    bool male;
    
    // Input with prompts
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter value of pi: ";
    cin >> pi;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter a vowel: ";
    cin >> vowel;

    cout << "Enter gender (1 for male, 0 for female): ";
    cin >> male;
    
    // Output (checking values)
    cout << "\nEntered Values:\n";
    cout << "Age: " << age << endl;
    cout << "Pi: " << pi << endl;
    cout << "Number: " << number << endl;
    cout << "Vowel: " << vowel << endl;
    cout << "Male: " << male << endl;
    
    return 0;
}