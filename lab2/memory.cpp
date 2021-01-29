#include <iostream>
using namespace std;

//  If Bool is represented by ony 1 bit i.e 0 or 1; why does it require 1 byte(8 bits) of storage?
// Use sizeof() to get size of a datatype. It can also be used to get the size of a variable;
int main(){
    int a = 10;
    cout<<"Size of bool datatype: "<<sizeof(bool)<<" bytes"<<endl;
    cout<<"Size of Variable a: "<<sizeof(a)<<" bytes"<<endl;
    
    int arr[] = {1,2,3};
    cout<<"Size of array arr: "<<sizeof(arr)/sizeof(arr[0])<<endl;
    // 12 ÷ 4 = 3 elements
}