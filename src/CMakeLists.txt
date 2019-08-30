set(project "main")
project(${project})
cmake_minimum_required(VERSION 3.12)
set(src 
   main.cpp
   add1.cpp
   audio.cpp
 )
# process exported functions
# set compiler and flags
set(CMAKE_C_COMPILER emcc)
set(CMAKE_CPP_COMPILER em++)
set(CMAKE_CXX_FLAGS "-g -s WASM=1 -s EXPORT_ALL=1")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../web/dist")
# specify the project
add_executable(${project}.js ${src})