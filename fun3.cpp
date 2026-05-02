#include<iostream>
using namespace std;

void printNameTenTimes(){

    for(int i=1; i<=10;i++){
        cout<<"omkar"<<endl;
    }
}

void printMultiples(int num){
    for(int i = 1; i<=10; i++){
        cout<< num << " x " << i << " = " << num * i <<endl;
        }
}

int convertIntocelsius( int far){

    int celsius = (far-32)*5/9;

    return celsius;
}

char convertIntoUpperCase( char ch){

    char answer = ch - 'a' + 'A';

    return answer;

}

int main(){

    printNameTenTimes();

    printMultiples(5);

    int celsius = convertIntocelsius(32);

    cout<<"conversion of far to cel is : "<<celsius<<endl;

    char uppercase = convertIntoUpperCase('k');

    cout <<"lowercase to uppercase is : "<<uppercase<<endl;

return 0;
}