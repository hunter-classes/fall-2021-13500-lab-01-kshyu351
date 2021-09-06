/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1D


Write a program month.cpp that asks the 
user to input the year and the month (1-12) and 
prints the number of days in that month (taking into account leap years). 
You may not use switch case or arrays even if you know these language constructs.

*/
#include <iostream>
using namespace std;
int main() {

  cout << "Enter year: ";
  int year;
  cin >> year;
  cout << "Enter month: "; 
  int month;
  cin >> month; 

  int isLeap;


  
if ((year % 4) != 0) {
    isLeap = 0;
}

else if ((year % 100) != 0) { 
    isLeap = 1;

    
}

else if ((year%400) != 0) { 
    isLeap = 0;

}

else {
    isLeap = 1; 
}

if (month == 1) {
    cout << "31 days" << endl;
}
else if (month == 3) {
    cout << "31 days" << endl; 
}
else if (month == 5) {
    cout << "31 days" << endl; 
}
else if (month == 7) {
    cout << "31 days" << endl; 
}
else if (month == 8) {
    cout << "31 days" << endl; 
}
else if (month == 10) {
    cout << "31 days" << endl; 
}
else if (month == 12) {
    cout << "31 days" << endl; 
}
else if (month == 4) {
    cout << "30 days" << endl; 
}
else if (month == 6) {
    cout << "30 days" << endl; 
}
else if (month == 9) {
    cout << "30 days" << endl; 
}
else if (month == 11) {
    cout << "30 days" << endl; 
}
else { 
    if (isLeap == 1) { 
        cout << "29 days" << endl;
    }
    else {
        cout << "28 days" << endl;
    }
}

}




 




