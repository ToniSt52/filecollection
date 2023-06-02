# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(opencv_basics VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic -O0)

# search for module opencv
find_package( OpenCV ) # alternative: find_package( OpenCV REQUIRED )

# continue only if opencv is found
if(OpenCV_FOUND)
    # add an executable for opencv canny 
    add_executable(opencv_canny src/main.cpp)
    # declare the path to the image we want to work with
    target_compile_definitions(opencv_canny PRIVATE IMGPATH="${CMAKE_CURRENT_LIST_DIR}/src" OUTPATH="${CMAKE_CURRENT_BINARY_DIR}")
    # include and link all opencv stuff
    target_include_directories(opencv_canny PUBLIC ${OpenCV_INCLUDE_DIRS} )
    target_link_libraries( opencv_canny ${OpenCV_LIBRARIES})
endif()