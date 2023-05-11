cmake_minimum_required(VERSION 3.20)

project(VSC-Cloud LANGUAGES C CXX)

set(BUILD_EXERCISES ON, CACHE BOOL "Enable building code of Lessons")


if(BUILD_EXERCISES)
    # add the Cpp projects
    add_subdirectory(./lesson_files)
endif()
