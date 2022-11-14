// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program uses while loops

#include <iostream>
#include <string>

    int positiveInteger;
    int loopCounter = 0;
    int addInt = 0;
    std::string positiveString;

int main() {
    // This function adds all the whole numbers up to the inputted number

    // Input

    std::cout << "Enter a positive integer: ";
    std::cin >> positiveString;
    std::cout << std::endl;

    // Process and output
    try {
        positiveInteger = std::stoi(positiveString);
        if (positiveInteger > 0) {
            while (loopCounter < positiveInteger) {
                loopCounter = loopCounter + 1;
                addInt = addInt + loopCounter;
                if (loopCounter >= positiveInteger)
                    std::cout << "The sum of all positive numbers from 1 to "
                            << positiveInteger << " is " << addInt << std::endl;
            }
        } else {
            std::cout << "" << positiveString
                      << " is not a positive integer" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << positiveString
                  << " is not a valid input." << std::endl;
    }

    std::cout << "\nDone.";
}
