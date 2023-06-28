#include <iostream> //cout is defined in iostream

// using declaration -> using std::cout
//lets us only use cout

int main() //main function 
{
    std::cout << "Hello there\n";

    //std -> namespace (a grouping of code and prevents naming conflicts)
    //cout -> object (like console.out) cout comes from class ostream
    //<< -> an operator (like +, -, /)

    int slices; //delcaration
    //slices = 5; //initialization

    //int slices = 5;

    // USER INPUT 

    std::cout << "How many slices of pizza do you have? ";

    std::cin >> slices; // arrows point in the direction of data flow

    std::cout << "You have " << slices << " slices of pizza." << std::endl; //endl goes to new line

    printf("%i\n", slices); //printf has to specify type whereas cout doesnt need the specification

    



    return 0; //output sometimes has "EXIT_SUCCESS"
}