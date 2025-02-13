/*
Filename: Chapter3Exercise17-MathTutor
Programmer: Morgan Thorne
Date: February 2025
Requirements:
Write program that can be used as a math tutor
1: Program should display two random numbers to be added
2: Program should pause while students works on problem
3: When student is ready they can press a key and the program will show correct answer

Changes:
1:Allow user to enter an answer
2:Display correct answer and tell student if they are right or wrong
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    //Variables for the equation
    int x = 247;
    int y = 129;
    int sum = 376;
    int usersum;

    //Output for the question
    cout << "Solve the equation below, enter the answer and press Enter to Check Work:" << endl;
    cout << setw(10) << x << endl << setw(7) << "+" << y << endl;
    cout << setw(10) << "---" << endl;
    cout << setw(7) << "";
    cin >> usersum;

    if (usersum != sum)
        cout << "You are incorrect, the correct answer is " << sum;

    else if (usersum = sum)
        cout << "You are correct, the answer was " << sum;

}

