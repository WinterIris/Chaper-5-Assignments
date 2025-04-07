/*
File Name : Chapter - 5 - Assignments
Developer / Programmer : Christopher Wilson
Date : 04 / 25

Requirements : The program should display 2 random numbers to be added. The program should then pause while the student works on the problem. When the student is ready to check the answer, a key should be pressed to display the answer.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

    int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int num1 = std::rand() % 100 + 1;
    int num2 = std::rand() % 100 + 1;

    std::cout << "Welcome to the Math Tutor Program!\n\n";
    std::cout << "Add the following numbers:\n";
    std::cout << "  " << num1 << "\n+ " << num2 << "\n" << std::endl;

    std::cout << "Press any key when you're ready to see the answer...";
    _getch();

    int correctAnswer = num1 + num2;

    std::cout << "\n\nThe correct answer is: " << correctAnswer << std::endl;
    std::cout << "Great job practicing!" << std::endl;

    return 0;
}
