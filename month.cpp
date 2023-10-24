// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Oct, 23 2023
// This program asks the user for a number then tells
// them what month is in that place.

#include <iostream>

int main() {
    int monthNumber;

    // Input - Gets number from user
    std::cout << "Enter a number (1-12) to represent a month: \n";
    std::cin >> monthNumber;

    switch (monthNumber) {
        case 1:
            std::cout << "January";
            break;

        case 2:
            std::cout << "February";
            break;

        case 3:
            std::cout << "March";
            break;

        case 4:
            std::cout << "April";
            break;

        case 5:
            std::cout << "May";
            break;

        case 6:
            std::cout << "June";
            break;

        case 7:
            std::cout << "July";
            break;

        case 8:
            std::cout << "August";
            break;

        case 9:
            std::cout << "September";
            break;

        case 10:
            std::cout << "October";
            break;

        case 11:
            std::cout << "November";
            break;

        case 12:
            std::cout << "December";
            break;

        default:
            std::cout << "Invalid input. Please enter a number from 1 to 12.";
    }
}
