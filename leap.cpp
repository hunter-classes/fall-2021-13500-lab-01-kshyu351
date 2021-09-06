/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B


Write a program smaller3.cpp that asks the 
user to input three integer numbers,
 and prints out the smallest of the three.

*/
#include <iostream>
using namespace std;
int main() {

  cout << "Enter year: ";
  int year;
  cin >> year;

  
if ((year % 4) == 0) {
    cout << "Leap year" << endl; 
}
else if ((year % 100) == 0) { 
    cout << "Common year" << endl; 
}

else if ((year%400) == 0) { 
    cout << "Leap year" << endl; 
}
else {
    cout << "Common year" << endl; 
}
}
 
 

  
  

  




