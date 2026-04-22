#include<iostream>
using namespace std;

int main() {


    char grade;

    cout<<"enter your grade:"<<endl;
    cin>>grade;

    switch(grade){

    case 'A':

    cout<<"YOURS MARKS IN BETWEEN 90 TO 100"<<endl;
    break;

    case 'B':

    cout<<"YOURS MARKS IN BETWEEN 80 TO 90"<<endl;
    break;
    
    case 'C':

    cout<<"YOURS MARKS IN BETWEEN 70 to 80"<<endl;
    break;

    case 'D':
    
    cout<<"YOURS MARKS IN BETWEEN 60 to 50"<<endl;
    break;

    case 'E':

    cout<<"YOURS MARKS IN BETWEEN 40 to 50"<<endl;
    break;
    
    case 'F':

    cout<<"FAIL"<<endl;
    break;
    
    }
 return 0;
}