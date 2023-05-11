#include <cstdint>
#include <iostream>

using MyCppStruct = struct
{
    int8_t s = 33;  //int8_t = signed char -> prints ascii | int16_t = signed short int
    float b = 3.2F;

    void print() const
    {
        std::cout << "s = " << s << std ::endl;
        std::cout << "b = " << b << std::endl;
    }
};

auto main() -> int 
{
    MyCppStruct my_struct;
    std::cout << "Printing struct my_struct " << std::endl;
    my_struct.print();
}
