include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

file(GLOB SOURCES test_tweetnacl.cpp main.cpp test_randombytes.cpp)
add_executable(test_tweetnacl ${SOURCES})
target_include_directories(test_tweetnacl PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(test_tweetnacl PRIVATE tweetnacl gtest)

include(GoogleTest)
gtest_discover_tests(test_tweetnacl)
