#include<iostream>
using namespace std;

int main(){

    for(char i='A';i<='Z';i=i+1){

        cout<<i<<endl;
        if(i=='O'){
            break;
        }
    }
return 0;
}