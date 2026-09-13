#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    int a;
    int b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Addition: " << calc.add(a, b) << std::endl;

    std::cout << "Modulus: " << calc.modulus(a, b) << std::endl;


    return 0;
}