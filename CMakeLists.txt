cmake_minimum_required(VERSION 3.5)

project(compiler_study_appendix LANGUAGES CXX ASM)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_CURRENT_BINARY_DIR ${CMAKE_BINARY_DIR})
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(CMAKE_ASM_FLAGS "${CFLAGS} -x assembler-with-cpp")

# add_executable(assembly Main.cpp myFunc.S)
add_executable(assembly Main.cpp)

set(CMAKE_OSX_ARCHITECTURES "arm64")
target_compile_options(assembly PRIVATE "-arch" "arm64")
