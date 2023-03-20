/*
Debug 4
Pawelski
3/19/2013
C++
*/

#include <iostream>

int main()
{
    std::int number1, number2, number3, number4, average;
    std::cout << "Enter a number >> ";
    std::cin >> number1;
    std::cout << "Enter another number >> ";
    std::cin >> number2;
    std::cout << "Enter another number >> ";
    std::cin >> number3;
    std::cout << "Enter another number >> ";
    std::cin >> number3;
    average = number1 + number2 + number3 + number4 / 4;
    std::cout << "Average: " + average + "\n";
    return 0;
}
