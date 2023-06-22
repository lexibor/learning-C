#include <iostream>

using namespace std;

int main()
{
    bool b = true; //boolean

    int32_t i32 = 1; //32 bits
    uint64_t u64 = 0; //unsigned 64 bits
    int8_t i8 = 0; //8 bits
    uint8_t u8 = 0; //unsigned 8 bits

    const char *str = "hi there"; //old C string
    string cppstr = "hello there"; // new c++ strings

    auto a = 1.0f; // compiler sees as a float
    auto a2 = 1; // compiler sees as a normal int
    auto a3 = (double)1.0f; // compiler will see it as a double

    return 0;
}