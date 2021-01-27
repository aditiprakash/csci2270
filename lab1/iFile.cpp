#include<iostream>
#include<fstream>

using namespace std;

// close files: good practise, cleans up unnecessary memory

// int main() {
//     char str[10];

//     // open file for reading using file object
//     ifstream input_File ("writing.txt");
//     // read string from file
//     input_File >> str;
//     // print
//     cout << str << "\n";
//     input_File >> str;
//     cout << str << "\n";
//     input_File.close();
// }

// alternatively
int main(){
    string myText;
    ifstream file_ptr("writing.txt");
    // read file line by line
    while (getline(file_ptr, myText)) {
    // Output the text from the file
    cout << myText;
    }
    file_ptr.close();
}

// Cmd + /
// or
// (non- mac)
// Ctrl + /