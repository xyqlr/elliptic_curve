include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_tweetnacl test_tweetnacl.cpp main.cpp)
target_include_directories(test_tweetnacl PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(test_tweetnacl PRIVATE tweetnacl gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(test_tweetnacl)
