// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program asks the user for the radius of their sphere
// and outputs the volume


#include <iostream>
#include <cmath>


float VolumeOfSphere(int radius) {
    // calculate volume
    float volume;

    // process
    volume = (4 * M_PI * pow(radius, 3) / 3);

    return volume;
}

int main() {
    // this function calls the precedent function
    std::string userRadius;
    int userRadiusInt;
    float CalculatedVolume;

    // input & output
    std::cout << "Enter the radius of your sphere (cm): ";
    std::cin >> userRadius;

    try {
        userRadiusInt = std::stoi(userRadius);
        if (userRadiusInt < 0) {
            std::cout << "" << std::endl;
            std::cout << "That is an invalid integer.";
        } else {
        // call function
        CalculatedVolume = VolumeOfSphere(userRadiusInt);
        std::cout << "" << std::endl;
        std::cout << "The volume of your sphere is "
        << CalculatedVolume << " cm³";
        }
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "That is an invalid integer.";
    }
        std::cout << "" << std::endl;
        std::cout << "\nDone." << std::endl;
}
