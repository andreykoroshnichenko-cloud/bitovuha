cmake_minimum_required(VERSION 3.10)

project(HomeAppliances)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(lib)

add_executable(app src/main.cpp)

target_link_libraries(app home_appliances)