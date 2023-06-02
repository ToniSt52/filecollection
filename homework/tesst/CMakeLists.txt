# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(tesst VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

# add a library for your student structure
add_library(tesst_lib src/tesst.cpp)
# add the includes to the library
target_include_directories(tesst_lib PUBLIC include)

# add an executabel and assign files to it
add_executable(tesst_exec src/main.cpp)

target_include_directories(tesst_exec PRIVATE include)
# link your libraries
target_link_libraries(tesst_exec PRIVATE tesst_lib)

# check if we have gtest
find_package(GTest)
enable_testing()
# include the gtest CMake stuff
include(GoogleTest)
# create a test executable
add_executable(tests_tesst test/tesst_test.cpp)
# link the gtest libraries
target_link_libraries(tests_tesst PRIVATE GTest::GTest GTest::Main)
# link the library we want to test
target_link_libraries(tests_tesst PRIVATE tesst_lib)
# add the include directories
target_include_directories(tests_tesst PUBLIC include)
# discover and add tests to the test list
gtest_discover_tests(tests_tesst)

