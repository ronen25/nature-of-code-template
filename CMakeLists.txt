cmake_minimum_required(VERSION 3.26)
project(nature1)

find_package(PkgConfig)

set(CMAKE_CXX_STANDARD 20)

pkg_check_modules(RAYLIB REQUIRED raylib)

add_executable(nature1 main.cpp)
target_include_directories(nature1 PRIVATE ${RAYLIB_INCLUDE_DIRS})
target_link_directories(nature1 PRIVATE ${RAYLIB_LIBRARY_DIRS})
target_link_libraries(nature1 PRIVATE ${RAYLIB_LIBRARIES})
