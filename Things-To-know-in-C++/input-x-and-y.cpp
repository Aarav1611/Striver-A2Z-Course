#include<iostream> // includes the input-output stream library for console I/O operations
using namespace std; // allows the use of standard library features without prefixing with std::    

int main(){ // main function where the program execution starts
    int x,y;// declares two integer variables x and y
    cin >> x >> y; // reads an integer input from the user and stores it in variable x
    cout << "The value of x is: " << x << " and y: " << y; // prints the value of x followed by a new line
    return 0; // returns 0 to indicate successful execution of the program
}