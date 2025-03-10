add_library(tweetnacl SHARED tweetnacl.c randombytes.c)
target_include_directories(tweetnacl PUBLIC ${CMAKE_SOURCE_DIR}/include)
add_executable(tweetnacl_main main.c)
target_link_libraries(tweetnacl_main PRIVATE tweetnacl)
