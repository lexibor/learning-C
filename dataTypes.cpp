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
#include <float.h>
#include <string>

#define X 10 // defining a constant value AKA macros

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
    unsigned char y = 129;

    std::cout << x << std::endl;
    std::cout << (int)x << std::endl; // casting to an integer tells you the num equivalent of a char based on ASCII

    // BOOL
    bool pizza_is_good = true; 

    /*  booleans have a numeric value,
        0 is equal to "false"
        any other number is considered "true" 
        but when cout-ing a boolean value with another number
        it will always show up as "1" because it is most correlated with "true"
    */
   std::cout << pizza_is_good << std::endl;

   // to print out "true" or "false" instead of 1 or 0

   std::cout << std::boolalpha << pizza_is_good << std::endl;

   // FLOATING POINT NUMBERS 
   
   float e;
   double f = 77000; // 7.7E4  7.7 * 10^4
   long double g;

   /*
        float has the least number of significant digits - least "trustworthy"
   */
    std::cout << FLT_DIG << std::endl; // 6 digits
    std::cout << DBL_DIG << std::endl; // 15 digits
    std::cout << LDBL_DIG << std::endl; // 18 digits

    // CONSTANTS

    const int h = 5; // symbolic constant, int is a literal constant

    enum {i = 100, j = 200}; // multiple constants in one

    // STRINGS

     std::string greeting = "hello";

     // LITERALS

     auto k = 5U; // unsigned integer 
     /* 
        5UL unsigned long
        5L long
        5LL long long
        5.0F float


        auto data type recognizes a type but cannot change that variable's type
     */
     
     std::cout << k << std::endl;
}