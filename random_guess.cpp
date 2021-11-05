// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program guess random numbers

#include <iostream>
#include <random>

int main() {
    // This lets user guess a number
    int number;
    int guessedNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 9);  // [1,9]

    number = idist(rgen);

    // input
    std::cout << "Enter the number between 0 and 50: ";
    std::cin >> guessedNumber;

    // process and output
    if (guessedNumber == number) {
        std::cout << "\nCorrect";
    } else {
        std::cout << "\nWrong, the random number is " << number << "."
                    << std::endl;
    }
    std::cout <<"\nDone." << std::endl;
}
