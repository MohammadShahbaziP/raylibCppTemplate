cmake_minimum_required(VERSION 3.15)
project(CPPBoilerplate LANGUAGES CXX)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(RAYLIB_PATH "${CMAKE_SOURCE_DIR}/vendor/raylib-src")

if(EXISTS "${RAYLIB_PATH}/CMakeLists.txt")
    add_subdirectory(${RAYLIB_PATH})
else()
    set(FETCHCONTENT_BASE_DIR ${CMAKE_SOURCE_DIR}/vendor) 
    include(FetchContent)
    FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 5.0
        GIT_SHALLOW TRUE
    )
    FetchContent_MakeAvailable(raylib)
endif()

add_subdirectory(Core)
add_subdirectory(App)
