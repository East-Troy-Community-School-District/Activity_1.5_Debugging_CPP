/*
Debug 3
Pawelski
3/19/2013
C++
*/

#include <iostream>
#include <string>

int main()
{
    std::string number1, number2, sum;
    std::cout << "Enter a number >> ";
    std::cin >> number1;
    std::cout << "Enter another number >> ";
    std::cin >> number2;
    sum = number1 + number2;
    std::cout << sum;
    return 0;
}
