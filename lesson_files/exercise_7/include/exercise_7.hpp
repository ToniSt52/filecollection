#ifndef EXERCISE_7_HPP_48FB15616610BF26903706C8
#define EXERCISE_7_HPP_48FB15616610BF26903706C8

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




#endif