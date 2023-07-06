#include <iostream>
#include <cmath>

int main()
{
    // SQRT AND POW

    std::cout << sqrt(25) << std::endl;
    std::cout << sqrt(-25) << std::endl; // will output NaN
    std::cout << pow(9, 999) << std::endl; // will output inf (infinity)
    std::cout << pow(-9, 999) << std::endl; // will output -inf

    std::cout << NAN << std::endl; // outputs nan
    std::cout << INFINITY << std::endl; // outputs inf
    std::cout << -INFINITY << std::endl; // outputs -inf

    // REMAINDER

    // std::cout << 10 % 3.25 << std::endl; WILL GIVE AN ERROR
    std::cout << remainder(10, 3.25) << std::endl; // like % but also can give a floating pt number

    // FMAX & FMIN

    std::cout << fmax(10, 3.25) << std::endl; // maximum between 2 nums
    std::cout << fmin(10, 3.25) << std::endl; // minimum between 2 nums

    // CEIL, FLOOR, TRUNC

    std::cout << ceil(-1.5) << std::endl; // will give -1; goes to highest number
    std::cout << floor(-1.5) << std::endl; // will give -2; goes to lowest value
    std::cout << trunc(-1.5) << std::endl; // will give -1; removes decimal point

    // ROUND

    std::cout << round(-1.5) << std::endl; // rounds to the nearest whole number

}