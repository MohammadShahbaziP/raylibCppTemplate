set(SOURCES
    Source/Core.h
    Source/Core.cpp
    Source/Window.h
    Source/Window.cpp
)

add_library(Core STATIC)

target_sources(Core PRIVATE ${SOURCES})

target_include_directories(Core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Source)
target_link_libraries(Core PUBLIC raylib)