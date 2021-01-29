#include<iostream>
using namespace std;

int main(){

    char var = 'A';
    cout<<"Character assigned to var"<<endl;
    cout << var<<endl;
    cout<<"Integer assigned to var"<<endl;
    var = 65;
    cout << var<<endl;

    cout << "********"<<endl;
    cout<<"Bool datatype requires 1 byte in memory"<<endl;
    bool value = 5;
    cout<<"5 as bool is: "<<value<<endl;
    value = true;
    cout<<"True as bool is: "<<value<<endl;
    value = false;
    cout<<"False as bool is: "<<value<<endl;
    value = 0;
    cout<<"0 as bool is: "<<value<<endl;
}