// Copyright (c) 2021 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Nov 2022
// This program tells a user if their inputted year is a leap year

#include <iostream>

int main() {
    // This function determines if the user's year is a leap year

    int year_as_integer;
    std::string year_as_string;

    // Input
    std::cout << "Enter a year after year 0: ";
    std::cin >> year_as_string;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        year_as_integer = std::stoi(year_as_string);

        if (year_as_integer % 4 == 0) {
            if (year_as_integer % 100 == 0) {
                if (year_as_integer % 400 == 0) {
                    std::cout << year_as_string << " is a leap year" << std::endl;
                }
                std::cout << year_as_string << " is not a leap year" << std::endl;
            }
            std::cout << year_as_string << " is a leap year" << std::endl;
        } else {
            std::cout << year_as_string << " is not a leap year" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please input a valid number." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
