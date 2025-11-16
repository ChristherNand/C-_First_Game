# Simple Game - C++ GUI Template

A basic "Hello World" video game template using C++ and SFML.

## Features
- Simple  square player that moves with arrow keys or WASD
- 800x600 game window
- Basic game loop with proper frame timing
- Object-oriented design with Player and Game classes

## Prerequisites
- C++17 compatible compiler
- CMake 3.10 or higher
- SFML 2.5 or higher

## Installation (Ubuntu/Debian)
```bash
sudo apt update
sudo apt install build-essential cmake libsfml-dev
```

## Building and Running
```bash
# Create build directory
mkdir build
cd build

# Configure with CMake
cmake ..

# Build the project
make

# Run the game
./SimpleGame
```

## Controls
- **Arrow Keys** or **WASD**: Move the player
- **ESC**: Exit the game

## Project Structure
```
├── CMakeLists.txt          # Build configuration
├── README.md              # This file
├── src/
│   ├── main.cpp           # Entry point
│   ├── Player.cpp         # Player implementation
│   └── Game.cpp           # Game loop and window management
├── include/
│   ├── Player.h           # Player class header
│   └── Game.h             # Game class header
└── assets/                # Game assets (empty for now)
```

## Next Steps
This template can be extended with:
- Collision detection
- Enemies or obstacles
- Score system
- Sound effects and music
- Sprites and animations
- Multiple levels
- UI elements (health bar, score display)
