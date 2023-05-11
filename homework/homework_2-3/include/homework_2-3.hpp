#ifndef HOMEWORK_2_3_HPP_DEFEAFD95A2211AC13F5E2E4
#define HOMEWORK_2_3_HPP_DEFEAFD95A2211AC13F5E2E4

#include <cstdint>

class animal
{
    public:
    auto return_nof() -> uint8_t;

    protected:
    uint8_t nof = 0;

};


class spider : public animal
{
    public:
    spider();

};


class mammal : public animal
{
    public:
    explicit mammal(uint8_t);

};

#endif
