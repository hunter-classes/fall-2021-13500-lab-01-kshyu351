/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A


Write a program smaller.cpp that asks the user 
to input two integer numbers and prints out the smaller of the two.
*/


#include <iostream>
using namespace std;
int main() {

  cout << "Enter the first number: " << endl;
  int firstNum;
  cin >> firstNum;
  cout << "Enter the second number: " << endl;
  int secondNum;
  cin >> secondNum;
  int smallerNum;
  if (firstNum < secondNum) {
   smallerNum = firstNum;
  }
  else {
    smallerNum = secondNum;
  }
  cout << "The smaller of the two is " << smallerNum << endl;
}
  
  

  
