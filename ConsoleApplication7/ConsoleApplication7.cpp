/*
File Name : Chapter - 5 - Assignments
Developer / Programmer : Christopher Wilson
Date : 04 / 25

Requirements : The program should predict the size of a population of organisms by asking the user the starting number of organisms, their average daily population increase as a %, and the number of days they will multiply
*/
#include <iostream>
#include <iomanip>

int main() {
    int startingPopulation;
    double dailyIncreasePercent;
    int numberOfDays;

    do {
        std::cout << "Enter the starting number of organisms (minimum 2): ";
        std::cin >> startingPopulation;

        if (startingPopulation < 2) {
            std::cout << "Error: Starting population must be at least 2.\n";
        }
    } while (startingPopulation < 2);

    do {
        std::cout << "Enter the average daily population increase (as a percentage, e.g., 5 for 5%): ";
        std::cin >> dailyIncreasePercent;

        if (dailyIncreasePercent < 0) {
            std::cout << "Error: Daily increase percentage cannot be negative.\n";
        }
    } while (dailyIncreasePercent < 0);

    do {
        std::cout << "Enter the number of days the organisms will multiply (minimum 1): ";
        std::cin >> numberOfDays;

        if (numberOfDays < 1) {
            std::cout << "Error: Number of days must be at least 1.\n";
        }
    } while (numberOfDays < 1);

    std::cout << "\nDay\tPopulation\n";
    std::cout << "---------------------\n";

    double population = startingPopulation;
    for (int day = 1; day <= numberOfDays; ++day) {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << day << "\t" << population << "\n";
        population += population * (dailyIncreasePercent / 100);
    }

    return 0;
}
