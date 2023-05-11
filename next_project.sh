#!/bin/bash

echo Project Name?
read ProjectName

if [ -z "$Random_String" ]; then
  # Generate a random ASCII string if Random_String is not set
  Random_String=$(openssl rand -hex 12)
fi

echo Random_String: $Random_String

mkdir $ProjectName
cd $ProjectName

cat << EOF > CMakeLists.txt
# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project($ProjectName VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

# add a library for your student structure
add_library(${ProjectName}_lib src/$ProjectName.cpp)
# add the includes to the library
target_include_directories(${ProjectName}_lib PUBLIC include)

# add an executabel and assign files to it
add_executable(${ProjectName}_exec src/main.cpp)

target_include_directories(${ProjectName}_exec PRIVATE include)
# link your libraries
target_link_libraries(${ProjectName}_exec PRIVATE ${ProjectName}_lib)

# check if we have gtest
find_package(GTest)
enable_testing()
# include the gtest CMake stuff
include(GoogleTest)
# create a test executable
add_executable(tests_${ProjectName} test/${ProjectName}_test.cpp)
# link the gtest libraries
target_link_libraries(tests_${ProjectName} PRIVATE GTest::GTest GTest::Main)
# link the library we want to test
target_link_libraries(tests_${ProjectName} PRIVATE ${ProjectName}_lib)
# add the include directories
target_include_directories(tests_${ProjectName} PUBLIC include)
# discover and add tests to the test list
gtest_discover_tests(tests_${ProjectName})

EOF

mkdir include
cd include

cat << EOF > $ProjectName.hpp
#ifndef ${ProjectName^^}_HPP_${Random_String^^}
#define ${ProjectName^^}_HPP_${Random_String^^}

void say_hi();

#endif

EOF

cd ..

mkdir src
cd src

cat << EOF > main.cpp
#include <iostream>
#include <stdint.h>
#include "$ProjectName.hpp"

auto main() -> int
{
    say_hi();

    return 0;
}

EOF

cat << EOF > $ProjectName.cpp
#include <iostream>
#include <stdint.h>
#include "$ProjectName.hpp"

void say_hi()
{
    std::cout << "Project $ProjectName" << std::endl;
}

EOF

cd .. 

mkdir test
cd test

cat << EOF > ${ProjectName}_test.cpp
#include "gtest/gtest.h"  // include the gtest functions & macros
#include "$ProjectName.hpp"

EOF

cd ..

cat << EOF > .gitignore
*.out
.vscloud
build

EOF

cd ..

echo "
set(BUILD_${ProjectName} ON, CACHE BOOL "Enable building code of Lessons") 

  if(BUILD_${ProjectName}) 
      # add the Cpp projects 
      add_subdirectory(./${ProjectName}) 
  endif()"  >> CMakeLists.txt
      
     
