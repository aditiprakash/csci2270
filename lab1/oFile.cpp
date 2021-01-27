#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // creating file object/ instance of ofstream and opening file
    ofstream oFile ("writing.txt");
    // using file object to write to file
    oFile << "Hello World" ; 
    // close file
    oFile.close();
}