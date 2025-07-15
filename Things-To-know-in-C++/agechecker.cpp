#include<iostream>
using namespace std;
//Write a program that takes an input of age and print whether the person is adult or not 
// >=18, yes
// <18, no
// int main(){
//     int age;
//     cin >> age;
//     if(age>=18){
//         cout << "You are an adult";
//     }
//     else{
//         cout << "You are not an adult";
//     }
//     return 0;

// }
// int main(){
//     int age;
//     cin >> age;
//     if(age>=18){
//         cout << "You are an adult";
//     }
//     else if(age<18){
//         cout << "You are not an adult";
//     }
//     return 0;

// }
int main(){
    int age;
    cin >> age;
    if(age>=18){
        cout << "You are an adult";
    }
    else if(age<10){
        cout << "You are not an adult";
    }
    return 0;

}