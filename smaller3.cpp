
/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B


Write a program smaller3.cpp that asks the user to input three integer numbers,
 and prints out the smallest of the three.
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
  cout << "Enter the third number: " << endl; 
  int thirdNum;

  
  int smallerNum;
  if (firstNum < secondNum) && (firstNum < thirdNum) {
   smallerNum = firstNum;
  }
  else if (secondNum < firstNum) && (secondNum < thirdNum) {
    smallerNum = secondNum;
  }
  else if (thirdNum < firstNum) && (thirdNum < secondNum) { 
    smallerNum = thirdNum;
  }
  cout << "The smaller of the two is " << smallerNum << endl;
}
  
  

  