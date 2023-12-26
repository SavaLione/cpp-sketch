#include <iostream>

#include "calc/calc.h"

int main()
{
    std::cout << "Hello world" << std::endl;

    std::cout << "sum (8 + 64): " << std::to_string(sum(8, 64)) << std::endl;
    std::cout << "div (64 / 8): " << std::to_string(divide(64, 8)) << std::endl;

    return 0;
}
