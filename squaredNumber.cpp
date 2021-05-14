// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program calculates the square of every number from 0 until the
// number inserted.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    // This function calculates the square of every number from 0 until the
    // number inserted.
    int integer;
    int counter;
    int result;

    std::cout <<
    "This program calculates the square of " <<
    "every number from 0 until the number inserted.\n"
    << std::endl;

    try {
        std::cout << "Insert a positive integer: ";
        std::cin >> integer;

        std::cout << std::endl;
        if (integer > 0) {
            for (counter = 0; counter < integer + 1; counter++) {
                result = pow(counter, 2);

                std::cout << counter << "² = " << result << std::endl;
            }
        } else {
            std::cout <<
            "This input is invalid, please, insert a positive integer."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout <<
        "\nThis input is invalid, please, insert a number."
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
