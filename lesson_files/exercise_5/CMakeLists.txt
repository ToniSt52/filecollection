# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(exercise_5 VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

# add a library for your student structure
add_library(exercise_5_lib src/exercise_5.cpp)
# add the includes to the library
target_include_directories(exercise_5_lib PUBLIC include)

# add an executabel and assign files to it
add_executable(exercise_5_exec src/main.cpp)

target_include_directories(exercise_5_exec PRIVATE include)
# link your libraries
target_link_libraries(exercise_5_exec PRIVATE exercise_5_lib)

# check if we have gtest
find_package(GTest)
enable_testing()
# include the gtest CMake stuff
include(GoogleTest)
# create a test executable
add_executable(tests_exercise_5 test/exercise_5_test.cpp)
# link the gtest libraries
target_link_libraries(tests_exercise_5 PRIVATE GTest::GTest GTest::Main)
# link the library we want to test
target_link_libraries(tests_exercise_5 PRIVATE exercise_5_lib)
# add the include directories
target_include_directories(tests_exercise_5 PUBLIC include)
# discover and add tests to the test list
gtest_discover_tests(tests_exercise_5)

