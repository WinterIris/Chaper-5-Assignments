/*
File Name : Chapter - 5 - Assignments
Developer / Programmer : Christopher Wilson
Date : 04 / 25

Requirements : The program should follow the same steps as Math-Tutor-Part-1, but instead of a display of the answer, the program should wait for an answer to be entered. If the answer is correct, display a message of congratulatins. If not, display the message showing the correct answer.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int num1 = std::rand() % 100 + 1;
    int num2 = std::rand() % 100 + 1;

    std::cout << "Welcome to the Math Tutor Program!\n\n";
    std::cout << "Add the following numbers:\n";
    std::cout << "  " << num1 << "\n+ " << num2 << "\n" << std::endl;

    int studentAnswer;
    std::cout << "Enter your answer: ";
    std::cin >> studentAnswer;

    int correctAnswer = num1 + num2;

    if (studentAnswer == correctAnswer) {
        std::cout << "Congratulations! That's correct!" << std::endl;
    }
    else {
        std::cout << "Oops! The correct answer is " << correctAnswer << "." << std::endl;
    }

    return 0;
}
