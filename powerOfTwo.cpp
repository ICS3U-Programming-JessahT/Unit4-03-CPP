// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 16/11/2022
// This program ask the user for an integer and it will
// produce the power of the numbers before the input number

#include <iostream>
#include <cmath>

int main() {
// declare variables
    int power, userInt;
    std::string userString;
    float userFloat;
    int counter = 0;
// get input for user
    std::cout << "Enter a whole number: ";
    std::cin >> userString;
    std::cout << "" << std::endl;


        try {  // try catch string and decimal
        userInt = std::stoi(userString);
        userFloat = std::stof(userString);

        if (userInt >= 0) {
             if (userFloat != userInt) {
                 std::cout << userFloat << " is invalid, enter a whole number";
        } else {  // for loop and display powers to user
                  for (int counter = 0; counter <= userInt; counter++) {
                  power = pow(counter, 2);
                  std::cout << counter << "^2 = " << power <<"\n";
            }
        }
        } else {
            std::cout << userInt << " is invalid, enter a whole number";
        }
    } catch (std::invalid_argument) {
        std::cout << userString << "is invalid, enter a whole number";
    }
}
