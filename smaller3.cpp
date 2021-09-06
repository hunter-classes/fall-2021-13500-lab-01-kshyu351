
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

  
  int smallest;
  if (firstNum <= secondNum) { 
    if (firstNum <= thirdNum) { 
      smallest = firstNum; 
    }
  }
    if (secondNum <= thirdNum) { 
      smallest = secondNum;
    }
  }
  else {
    smallest = thirdNum;
  }  
 
  cout << "The smaller of the three is " << smallest << endl;
  return 0; 
  
}
  
  

  