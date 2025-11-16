cmake_minimum_required(VERSION 3.10)
project(BasicGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SFML
find_package(SFML 2.5 COMPONENTS graphics window system network REQUIRED)

# Add executable
add_executable(BasicGame 
    src/main.cpp
    src/Game.cpp
    src/Player.cpp
)

# Include directories
target_include_directories(BasicGame PRIVATE include)

# Link SFML libraries
target_link_libraries(BasicGame PRIVATE 
    sfml-graphics
    sfml-window
    sfml-system
    sfml-network
)

# Copy assets to build directory
file(COPY ${CMAKE_SOURCE_DIR}/assets DESTINATION ${CMAKE_BINARY_DIR})