cmake_minimum_required(VERSION 3.20)

project(VSC-Cloud LANGUAGES C CXX)

enable_testing()

set(BUILD_homework_2-3 ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_homework_2-3) 
      # add the Cpp projects 
      add_subdirectory(./homework_2-3) 
  endif()

set(BUILD_tesst ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_tesst) 
      # add the Cpp projects 
      add_subdirectory(./tesst) 
  endif()

set(BUILD_cv_test ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_cv_test) 
      # add the Cpp projects 
      add_subdirectory(./cv_test) 
  endif()

set(BUILD_cv_image_greyscale ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_cv_image_greyscale) 
      # add the Cpp projects 
      add_subdirectory(./cv_image_greyscale) 
  endif()

set(BUILD_cv_image_test3 ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_cv_image_test3) 
      # add the Cpp projects 
      add_subdirectory(./cv_image_test3) 
  endif()
