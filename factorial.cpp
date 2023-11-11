// Copyright by : Anastasia Friedenstein Patino
// Created on : November.11, 2023
// Program that determines the factorial of a while number

#include <iostream>
#include <string>
#include <stdexcept>

int main() {
    std::cout << "Enter a whole number: ";
    std::string user_num_as_string;
    std::cin >> user_num_as_string;

    int user_num_int;
    int factorial = 1;

    try {
        user_num_int = std::stoi(user_num_as_string);
        int counter = user_num_int;

        do {
            factorial *= counter;
            counter = counter - 1;
        } while (counter > 1);

        std::cout << "Facto" << user_num_int << "is" << factorial << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << "Enter a valid whole number." << std::endl;
    }

    return 0;
}
