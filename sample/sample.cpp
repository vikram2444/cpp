# include <iostream> // library inclusion for input and output
using namespace std; // using the standard namespace for input and output

int main () { // main function this function is the entry point of the program
    cout << "Enter Your Name : " << endl; // print statement to ask the user to enter the username
    string name; // variable declaration with data type string
    cin >> name; // asgin the user input to the variable name
    cout << "Hello " << name; // show the user name with some message
    cout << "Welcome to C++ Programming"; // additional message for the user 
    return 0; // return statement for the main function
} 

// // without using the namespace std
// # include <iostream>

// int main () {
//     std:: cout << "enther the name" << std ::endl;
//     return 0;
// }