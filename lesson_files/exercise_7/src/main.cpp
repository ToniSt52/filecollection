

#include "exercise_7.hpp"

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

