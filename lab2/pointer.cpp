#include<iostream>
using namespace std;

int main(){
    int a = 5;
    // void* ptr = &a;
    //  &-> address-of or referencing operator
    int* ptr = &a;
    // memory address in hexadecimal format
    // type of pointer is useful for data manipulation in memory i.e how much space to allocate 
    cout<<ptr<<endl;
    // To access the value at the pointer, you have to reference it using a dereferencing operator (*)
    *ptr += 2; 
    // error when ptr of type void;
    cout<<*ptr<<endl;
    cout<<a<<endl;
    
}