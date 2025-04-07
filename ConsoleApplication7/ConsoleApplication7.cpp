/*
File Name : Chapter - 5 - Assignments
Developer / Programmer : Christopher Wilson
Date : 04 / 25

Requirements : This program should display a menu for 4 options: Addition, Subtraction, Multiplication and Division. Each option should lead to its corresponding choice. If an incorrect choice is made, display an error message then return to the menu.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

void displayMenu() {
    std::cout << "\n=== Math Tutor Menu ===\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Quit\n";
    std::cout << "Choose an option (1-5): ";
}

void performOperation(int choice) {
    int num1 = std::rand() % 100 + 1;
    int num2 = std::rand() % 100 + 1;
    int studentAnswer;
    int correctAnswer;

    switch (choice) {
    case 1: // Addition
        std::cout << "\nWhat is " << num1 << " + " << num2 << "? ";
        std::cin >> studentAnswer;
        correctAnswer = num1 + num2;
        break;

    case 2: // Subtraction
        std::cout << "\nWhat is " << num1 << " - " << num2 << "? ";
        std::cin >> studentAnswer;
        correctAnswer = num1 - num2;
        break;

    case 3: // Multiplication
        std::cout << "\nWhat is " << num1 << " * " << num2 << "? ";
        std::cin >> studentAnswer;
        correctAnswer = num1 * num2;
        break;

    case 4: // Division
        while (num2 == 0) {
            num2 = std::rand() % 100 + 1;
        }
        correctAnswer = num1 / num2;
        std::cout << "\nWhat is " << num1 << " / " << num2 << " (integer division)? ";
        std::cin >> studentAnswer;
        break;

    default:
        return;
    }

    if (studentAnswer == correctAnswer) {
        std::cout << "Correct! Great job! \n";
    }
    else {
        std::cout << "Sorry, the correct answer is " << correctAnswer << ".\n";
    }
}

int main() {
    // Initialize random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int choice;
    bool running = true;

    while (running) {
        displayMenu();
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cout << "Invalid input! Please enter a number between 1 and 5.\n";
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            continue;
        }

        switch (choice) {
        case 1:
        case 2:
        case 3:
        case 4:
            performOperation(choice);
            break;
        case 5:
            std::cout << "Goodbye!\n";
            running = false;
            break;
        default:
            std::cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    return 0;
}
