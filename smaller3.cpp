
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
  int first;
  cin >> first;
  cout << "Enter the second number: " << endl;
  int second;
  cin >> second;
  cout << "Enter the third number: " << endl; 
  int third;

  
  int smallest;
  if (first <= second) { 
    if (first <= third) { 
      smallest = first; 
    }
  }
  else if (second <= first) { 
    if (second <= third) { 
      smallest = second;
    }
  }
  else { 
    smallest = third;
  }

 
  cout << "The smaller of the three is " << smallest << endl;
  return 0; 
}
  
  

  