# Opus Magnum C++

This project contains files created during my journey through Opus Magnum C++ by Jerzy Grębosz.

## Building project

To build project you need:

- cmake (3.30)
- ninja (1.10)

Now we can start building files for building system (CMake):

- `cmake ./ -G Ninja` - it will prepare all files needed to build our executables
- `ninja` - it will build our executables and place them into './build' folder

## Development

1. Create a new source file (*.cpp).
2. Update CMakeLists.txt to include the new file.
3. Run `ninja` to rebuild the project. 