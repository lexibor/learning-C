/*
    DATA TYPES

    intergal - int
    char - character
    floating point - fraction
    bool - T/F
    arrays - list of memory
    structs
    class - blueprint of a structure

    INTEGRAL

    int - can be 16bits(guaranteed) and 32bits
    bit - 1s and 0s (binary)
    sign bit - to represent negative numbers
    signed - can represent negative numbers but max number is halved
    unsigned - only positive numbers
*/

#include <iostream>
#include <climits>

int main()
{
    // INTEGRAL
    short a;
    int b;
    long c;
    long long d;
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

   // std::cout << USHRT_MAX << std::endl;  // adding a 'U' at the beginning shows the unsigned amount

    // CHAR
    char x = 65; // chars always use single quotes; max char value is 127 signed
    unsigned char y = 129

    std::cout << x << std::endl;
    std::cout << (int)x << std::endl; // casting to an integer tells you the num equivalent of a char based on ASCII


    return 0;
}