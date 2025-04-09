/*
File Name : Chapter - 5 - Assignments
Developer / Programmer : Christopher Wilson
Date : 04 / 25

Requirements : The program should prompts the user to enter the number of students in class, then loops to read that many names. Once all the names have been read, it reports which student would be at the front of the line and which one would be at the end. Assume no 2 students have the same name.
*/
#include <iostream>
#include <string>

int main() {
    int numStudents;

    do {
        std::cout << "Enter the number of students in the class (1 to 25): ";
        std::cin >> numStudents;

        if (numStudents < 1 || numStudents > 25) {
            std::cout << "Error: Number must be between 1 and 25.\n";
        }
    } while (numStudents < 1 || numStudents > 25);

    std::string name, firstInLine, lastInLine;

    std::cout << "\nEnter the first name of each student:\n";

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Student " << (i + 1) << ": ";
        std::cin >> name;

        if (i == 0) {
            firstInLine = name;
            lastInLine = name;
        }
        else {
            if (name < firstInLine) {
                firstInLine = name;
            }
            if (name > lastInLine) {
                lastInLine = name;
            }
        }
    }

    std::cout << "\nStudent at the front of the line: " << firstInLine << std::endl;
    std::cout << "Student at the end of the line: " << lastInLine << std::endl;

    return 0;
}
