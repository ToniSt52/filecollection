cmake_minimum_required(VERSION 3.20)

project(VSC-Cloud LANGUAGES C CXX)

enable_testing()

set(BUILD_EXERCISES ON, CACHE BOOL "Enable building code of Lessons")

if(BUILD_EXERCISES)
    # add the Cpp projects
    add_subdirectory(./exercise_1)
endif()

set(BUILD_exercise_2 ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_exercise_2) 
      # add the Cpp projects 
      add_subdirectory(./exercise_2) 
  endif()


set(BUILD_exercise_3 ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_exercise_3) 
      # add the Cpp projects 
      add_subdirectory(./exercise_3) 
  endif()

set(BUILD_exercise_4 ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_exercise_4) 
      # add the Cpp projects 
      add_subdirectory(./exercise_4) 
  endif()

set(BUILD_exercise_5 ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_exercise_5) 
      # add the Cpp projects 
      add_subdirectory(./exercise_5) 
  endif()

set(BUILD_exercise_6 ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_exercise_6) 
      # add the Cpp projects 
      add_subdirectory(./exercise_6) 
  endif()

set(BUILD_exercise_7 ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_exercise_7) 
      # add the Cpp projects 
      add_subdirectory(./exercise_7) 
  endif()

set(BUILD_exercise_8 ON, CACHE BOOL Enable building code of Lessons) 

  if(BUILD_exercise_8) 
      # add the Cpp projects 
      add_subdirectory(./exercise_8) 
  endif()
