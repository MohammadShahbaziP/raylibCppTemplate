set(SOURCES
    Source/Main.cpp
    Source/App.h
    Source/App.cpp
)

add_executable(App)

target_sources(App PRIVATE ${SOURCES})

target_include_directories(App PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(App PRIVATE Core raylib)