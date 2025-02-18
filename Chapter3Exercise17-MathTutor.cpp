/*
Filename: Chapter3Exercise17-MathTutor
Programmer: Morgan Thorne
Date: February 2025
Requirements:
Write program that can be used as a math tutor
1: Program should display two random numbers to be added
2: Program should pause while students works on problem
3: When student is ready they can press a key and the program will show correct answer
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
   //Variables for the equation
    int x = 247;
    int y = 129;
    int sum = (x + y);

    //Output for the question
    cout << "Solve the equation below:" << endl;
    cout << setw(10) << x << endl << setw(7) << "+" << y << endl << "Press Enter to check your answer: ";
    
    //Allows user to enter anykey they want to check their answer
    cin.ignore();

    //Equation with answer
    cout << setw(10) << x << endl << setw(7) << "+" << y << endl << setw(10) << "---" << endl << setw(10) << sum << endl;

}


