// Passing arguments from command-line
// Why do we need them?
// 1. Parameters supplied when program is invoked through the main()
// 2. Send input from outside the program isntead of hard-coding values
// 3. argv[0] holds the name of the program
// 4. argv[argc] is a NULL pointer
// 5. Arguments are space-separated or within quotes (ex. "hello world")
#include<iostream>
// argc: count of total arguments
// argv: list of arguments of type string

int main(int argc, char const *argv[]){

    std :: cout << "Total Arguments: " << argc << std :: endl;
    
    std ::  cout << "----------" << std :: endl;

    for (int i = 0; i <  argc ; i++){
        std :: cout << "Argument #" << i + 1 << ": ";
        std :: cout << argv[i] << std :: endl;

    }
}

