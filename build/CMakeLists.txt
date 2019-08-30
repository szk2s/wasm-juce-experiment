cmake_minimum_required (VERSION 2.6)

project(WasmJuceExample)
# The version number.
set (APP_NAME "wasm-juce-example")
set (APP_VERSION_MAJOR 1)
set (APP_VERSION_MINOR 0)
set (PROJECT_SOURCE_DIR "../src")
set (PROJECT_BINARY_DIR "generated")

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
        "../src/AppConfig.h.in"
        "${PROJECT_BINARY_DIR}/AppConfig.h"
)

add_library(Add1 "${PROJECT_SOURCE_DIR}/add1.cpp")
# add the binary tree to the search path for include files
# so that we will find AppConfig.h
include_directories("${PROJECT_BINARY_DIR}")
# add the executable
add_executable(WasmJuceExample "../src/Main.cpp")
target_link_libraries(WasmJuceExample Add1)