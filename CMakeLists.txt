cmake_minimum_required(VERSION 2.8.11)
project(tic-tac-toe)

# State directories for modules and binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

#Location of source files
file(GLOB SOURCE src/*.c src/*.h)

# Create the binary
add_executable(${CMAKE_PROJECT_NAME} ${SOURCE})
