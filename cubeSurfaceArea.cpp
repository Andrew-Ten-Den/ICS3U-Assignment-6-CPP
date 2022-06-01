// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew
// Created on: June 2022
// This program calculates the surface area of a cube

#include <iostream>

void CalculateArea(int length) {
    // calculate surface area
    int surfaceArea;

    // process
    surfaceArea = length * length * 6;

    // output
    std::cout << "\nThe surface area is " << surfaceArea << " cm²" << std::endl;
}

main() {
    // this function gets length and width

    std::string lengthAsString;
    int length;

    try {
        // input
        std::cout << "Enter the length of the cube (cm): ";
        std::cin >> lengthAsString;
        length = std::stoi(lengthAsString);

        // call functions
        CalculateArea(length);
    } catch (std::invalid_argument) {
        std::cout << "\nPlease enter a valid positive integer" << std::endl;
    }
}
