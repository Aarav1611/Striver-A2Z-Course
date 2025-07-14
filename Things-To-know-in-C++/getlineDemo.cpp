#include<iostream>
using namespace std; // allows the use of standard library features without prefixing with std::
int main(){
    string str;
    getline(cin, str);
    cout << str; // prints the string read from the input
    return 0; // returns 0 to indicate successful execution of the program
}