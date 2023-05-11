#include <iostream>
#include <stdint.h>
#include "homework_2-3.hpp"

auto main() -> int
{
    // calling both classes and naming animals 
    mammal groundhog(4);
    spider tarantula;

    std::cout << "A groundhog has " << static_cast<unsigned>(groundhog.return_nof()) << " legs!" << std::endl;
    std::cout << "A tarantula has " << static_cast<unsigned>(tarantula.return_nof()) << " legs!" << std::endl;
}

