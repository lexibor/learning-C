#include <iostream>
#include <cmath>

//function has to be declared before it is put into use
//can also create "header" files to declare the functions; use #include to use those header files

double power(double base, int exp) //declaring and defining
{
    double result = 1;

    for(int i = 0; i < exp; i++)
    {
        result = result * base;
    }

    return result;
}

int main() //main function runs code
{
    int base, exponent;

    std::cout << "What is the base?: ";
    std::cin >> base;

    std::cout << "What is the exponent?: ";
    std::cin >> exponent;

    //std::cout << pow(base, exponent) << std::endl;

    // double power = pow(base, exponent);

    double myPower = power(base, exponent);

    // std::cout << power << std::endl;
    std::cout << myPower << std::endl;

    //without user input

    std::cout << pow(10, 2);

}