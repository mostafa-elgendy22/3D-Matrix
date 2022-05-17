cmake_minimum_required(VERSION 3.0.0)
project(3D_matrix VERSION 1.0.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/bin)

set(sources three_dimensional_matrix/three_dimensional_matrix.cpp)

include_directories(
    three_dimensional_matrix/
)

add_executable(${PROJECT_NAME} main.cpp ${sources})