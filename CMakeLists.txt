# travic currently has v2.8.7
cmake_minimum_required(VERSION 2.8.7)

project(travisty)

function(set_cxx_version VER)
  if(NOT VER)
    set(VER "11")
  endif()
  set(_versions "98" "03" "11" "1y")
  list(FIND _versions ${VER} _index)
  if(${_index} EQUAL -1)
    message(FATAL_ERROR "Invalid C++ version requested: ${VER}")
  endif()
  message("Using C++ version ${VER}")
  #add_compile_options("-std=c++${VER}")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++${VER}" PARENT_SCOPE)
endfunction()

if(${CXXVERSION})
  set_cxx_version(${CXXVERSION})
else()
  set_cxx_version("11")
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

