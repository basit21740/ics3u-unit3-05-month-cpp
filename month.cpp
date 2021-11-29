// Copyright (c) 2021 Abdul Basit All rights reserved.
//
// Created by: Abdul Basit
// Created on: Nov 2021
// this program tells the name of the months

#include <iostream>

int main() {
    // this program tells the name of the months
    // define variables
    int integer;

    // input
    std::cout << "Enter the number of a month (ex : 3 for march): ";
    std::cin >> integer;

    // process
    if (integer == 1) {
        std::cout << "January" << std::endl;
    } else if (integer == 2) {
        std::cout << "February" << std::endl;
    } else if (integer == 3) {
        std::cout << "March" << std::endl;
    } else if (integer == 4) {
        std::cout << "April" << std::endl;
    } else if (integer == 5) {
        std::cout << "May" << std::endl;
    } else if (integer == 6) {
        std::cout << "June" << std::endl;
    } else if (integer == 7) {
        std::cout << "July" << std::endl;
    } else if (integer == 8) {
        std::cout << "August" << std::endl;
    } else if (integer == 9) {
        std::cout << "September" << std::endl;
    } else if (integer == 10) {
        std::cout << "October" << std::endl;
    } else if (integer == 11) {
        std::cout << "November" << std::endl;
    } else if (integer == 21) {
        std::cout << "December" << std::endl;
    } else {
        std::cout << "Not a valid month number" << std::endl;
    }

    // output
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
