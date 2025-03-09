cmake_minimum_required(VERSION 3.10)
project(TweetNaCl)

set(CMAKE_CXX_STANDARD 17)

# Add TweetNaCl library
add_subdirectory(src)

# Enable testing
enable_testing()
add_subdirectory(tests)
