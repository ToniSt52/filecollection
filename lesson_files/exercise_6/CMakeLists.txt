# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(exercise_6 VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

# add a library for your student structure
add_library(exercise_6_lib src/exercise_6.cpp)
# add the includes to the library
target_include_directories(exercise_6_lib PUBLIC include)

# add an executabel and assign files to it
add_executable(exercise_6_exec src/main.cpp)

target_include_directories(exercise_6_exec PRIVATE include)
# link your libraries
target_link_libraries(exercise_6_exec PRIVATE exercise_6_lib)

# check if we have gtest
find_package(GTest)
enable_testing()
# include the gtest CMake stuff
include(GoogleTest)
# create a test executable
add_executable(tests_exercise_6 test/exercise_6_test.cpp)
# link the gtest libraries
target_link_libraries(tests_exercise_6 PRIVATE GTest::GTest GTest::Main)
# link the library we want to test
target_link_libraries(tests_exercise_6 PRIVATE exercise_6_lib)
# add the include directories
target_include_directories(tests_exercise_6 PUBLIC include)
# discover and add tests to the test list
gtest_discover_tests(tests_exercise_6)

