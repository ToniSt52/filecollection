cmake_minimum_required(VERSION 3.20)

project(VSC-Cloud LANGUAGES C CXX)

set(BUILD_homework_2-3 ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_homework_2-3) 
      # add the Cpp projects 
      add_subdirectory(./homework_2-3) 
  endif()
