#include <iostream>
#include <string>

int main()
{

    // escape sequences are \t, \n, etc

    std::cout << "Hello\tthere\n";

    // \0 null terminating character

    std::cout << "\0";

    //\" lets us put in a quote

    std::cout << "\"Hello there\"\n";

    char single_quote = '\'';

    // \\ two backslashes for one

    std::cout << "\\ two backslashes \n";
}