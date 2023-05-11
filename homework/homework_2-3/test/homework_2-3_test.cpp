#include "gtest/gtest.h"  // include the gtest functions & macros
#include "homework_2-3.hpp"

TEST(animalTest, return_nof_mammal)
{
    mammal groundhog(4);
    EXPECT_EQ(4, groundhog.return_nof());
}

TEST(animalTest, return_nof_spider)
{
    spider tarantula;
    EXPECT_EQ(8, tarantula.return_nof());
}