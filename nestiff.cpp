#include<iostream>
using namespace std;

int main(){

    int age;

    cout << "WHAT IS YOUR AGE: ";
    cin >> age;

    bool isIndian;
    cout << "ARE YOU INDIAN (1 for Yes, 0 for No): ";
    cin >> isIndian;
    
    if(age >= 18){

        if(isIndian){
            cout << "YOU CAN VOTE";
        }
        else{
            cout << "FOR VOTING YOU MUST BE A CITIZEN OF INDIA";
        }
    
    }
    else{
        cout << "NOT OLD ENOUGH TO VOTE";
    }

    return 0;
}