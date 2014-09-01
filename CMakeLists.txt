cmake_minimum_required(VERSION 2.8.12)

project(travisty)

if(CXXVERSION EQUAL "98")
  message("Using C++ 98")
  add_compile_options("-std=c++98")
elseif(CXXVERSION EQUAL "03")
  message("Using C++ 03")
  add_compile_options("-std=c++03")
elseif(CXXVERSION EQUAL "11")
  message("Using C++ 11")
  add_compile_options("-std=c++11")
elseif(CXXVERSION EQUAL "1y")
  message("Using C++ 1y")
  add_compile_options("-std=c++1y")
else()
  message("Defaulting to C++ 11")
  add_compile_options("-std=c++11")
endif()

add_executable(
  travisty
  src/travisty.cpp
  )

enable_testing()
add_test(
  NAME main
  COMMAND travisty
  )

