// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 20th, 2023
// This program asks the user to enter a whole number
// then tells the user every factor of that number
#include <iostream>

int main() {
    // Declare variables
    int counter, userNumInt, factor;
    std::string userNumString;

    // Greeting
    std::cout << "" << std::endl;
    std::cout << "This program finds all the factors of";
    std::cout << " the whole number you enter." << std::endl;
    std::cout << " For example, 6 has the factors 1, 2, 3, and 6." << std::endl;
    std::cout << "" << std::endl;

    // get the user number as a string
    std::cout << "Enter a whole number: ";
    std::cin >> userNumString;
    std::cout << std::endl;

    try {
        // convert the user's guess to an int
        userNumInt = std::stoi(userNumString);

        // Check if the user's number is 0
        if (userNumInt == 0) {
            std::cout << "0 is a factor of 0." << std::endl;

        // Check if the user's number is negative
        } else if (userNumInt < 0) {
            std::cout << userNumInt;
            std::cout << " is not a whole number." << std::endl;
        } else {
            for (counter = 1; counter <= userNumInt; counter++) {
                factor = userNumInt % counter;
                if (factor == 0) {
                    std::cout << counter << " is a factor of ";
                    std::cout << userNumInt << "." << std::endl;
                } else if (counter > userNumInt) {
                    break;
                }
            }
        }
    } catch (std::exception) {
        // The user did not enter an integer
        std::cout << userNumString << " is not an integer!\n";
    }
}
