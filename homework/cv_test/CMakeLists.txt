# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(cv_test VERSION 1.0 LANGUAGES CXX)

# search for module opencv 
find_package( OpenCV REQUIRED )
# continue only if opencv is found
if(OpenCV_FOUND)
    # add executable for opencv main world
    add_executable(opencv_main src/main.cpp)
    # include and link all opencv stuff
    target_include_directories(opencv_main PUBLIC ${OpenCV_INCLUDE_DIRS} )
    target_link_libraries( opencv_main ${OpenCV_LIBRARIES})
endif()
target_compile_definitions(opencv_main PRIVATE OUTPATH="${CMAKE_CURRENT_BINARY_DIR}")
