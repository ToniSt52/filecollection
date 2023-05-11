#include <iostream>
#include <stdint.h>
#include "homework_2-3.hpp"

auto animal::return_nof() -> uint8_t
{
    return nof;
}

spider::spider()
{
    nof = 8;
}

mammal::mammal(const uint8_t var_nof)
{
    nof = var_nof;
}
