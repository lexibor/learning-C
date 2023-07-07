#include <iostream>
#include <string>

int main()
{
    std::string greeting = "hello"; // basic string

    // std::cout << greeting + " there!" << std::endl;

    //std::string greeting;
    // std::cin >> greeting;
    // std::cout << greeting << std::endl; // cin only grabs the first word before white space

    // string class functions

    //std::cout << greeting.length() << std::endl;

    char name[] = "Alexia"; // C style string == array of characters

    // USER INPUT STRINGS

    //std::cin >> greeting;
    // getline(std::cin, greeting); // for user input strings
    // cin.getline(); // for user input numeric values
    // std::cout << greeting << std::endl;

    // string methods /////

    std::cout << greeting.length() << std::endl;
    std::cout << greeting.size() << std::endl; 
    // they both do the same thing

    std::cout << greeting.append(" there!") << std::endl; // interchangeable with greeting += ....
    

    greeting.insert(3, "   "); // the count does not start at 0 for this method
    std::cout << greeting << std::endl; 

    greeting.erase(3, 3); // position in string, num of characters after position (can leave second argument empty)
    std::cout << greeting << std::endl;

    greeting.pop_back();
    std::cout << greeting << std::endl; // removing the last character in a string 

    greeting.replace(0, 4, "hewoo"); // start index, end index, what is replacing it
    std::cout << greeting << std::endl;

    // searching a string for a particular word

    std::string badWords = "What the heck";

    badWords.replace(badWords.find("heck"), 4, "****");
    std::cout << badWords << std::endl;

    // substring
    greeting = "What is up";
    std::cout << greeting.substr(5, 2) << std::endl; // start index, number of characters

    std::cout << greeting.find_first_of("aeiou") << std::endl;
    //npos == -1 == NOT FOUND

    if(greeting.compare("What is up") == 0) std::cout << "Equals" << std::endl; // can just compare strings using "=="
}