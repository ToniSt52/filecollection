#include <iostream>
#include <stdint.h>
#include <cstdint> 
#include <string>

class animal
{
    public:
    virtual void make_noise() const = 0;
};

class bird;
class cat : public animal 
{
    public:
    void operator+(const cat &)
    {
        std::cout << "2 cats "  << std::endl;
    }
    void operator+(const bird &)
    {
        std::cout << "cat + bird" << std::endl;
    }
    void make_noise() const
    {
        std::cout << "meow" << std::endl;
    }
};

class bird : public animal
{
    public:
    void operator+(const bird &)
    {
        std::cout << "2 birds "  << std::endl;
    }
    void operator+(const cat &)
    {
        std::cout << "cat + bird" << std::endl;
    }
    void make_noise() const
    {
        std::cout << "flatter flatter" << std::endl;
    }
};

auto main() -> int
{
    cat kollege;
    cat schnuerschuh;
    bird der;
    bird eumel;

    kollege + schnuerschuh;
    kollege + der;
    der + eumel;

    kollege.make_noise();
    der.make_noise();
    eumel.make_noise();
    schnuerschuh.make_noise();

    return 0;
}

