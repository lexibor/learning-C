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

void print_pow(double base, int exp)
{
    double myPower = power(base, exp);
    std::cout << base << " raised to the " << exp << " power is " << myPower << std::endl;
}

int main() //main function runs code
{
    double base;
    int exponent;

    std::cout << "What is the base?: ";
    std::cin >> base;

    std::cout << "What is the exponent?: ";
    std::cin >> exponent;

    //std::cout << pow(base, exponent) << std::endl;

    // double power = pow(base, exponent);

    //double myPower = power(base, exponent); MOVED THIS TO VOID FUNCTION

    // std::cout << power << std::endl;
    //std::cout << myPower << std::endl; MOVED AND CHANGED IN VOID FUNCTION

    print_pow(base, exponent);

    //without user input

    std::cout << pow(10, 2);

}