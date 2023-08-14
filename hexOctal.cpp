#include <iostream>
#include <string>

int main()
{
   // base 16 vs base 8

    int number = 30; // base 10 outputs 30

    //int number = 0x30; //base 16 outputs 48

    //int number = 030; //base 8 outputs 24

    std::cout << number << std::endl;

    //how to show a specific number in another base

    std::cout << "Base 16: " << std::hex << number << std::endl; // in base 16

    std::cout << "Base 8: " << std::oct << number << std::endl; // in base 8
}