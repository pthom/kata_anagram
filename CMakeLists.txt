cmake_minimum_required (VERSION 3.2.0)
set (CMAKE_CXX_STANDARD 11)

project(anagram)

# Add doctest
include_directories("thirdparty/doctest")

# Add main target and test target
add_executable(anagram anagram.cpp Readme.md)
add_executable(anagram_test anagram.cpp)
target_compile_definitions(anagram_test PRIVATE "-DUNIT_TEST")
target_compile_definitions(anagram PRIVATE  "-DDOCTEST_CONFIG_DISABLE")

# Enable tests and register test with `make test`
enable_testing()
add_test(NAME anagram_test COMMAND anagram_test)

# Copy resources to runtime directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
file(COPY resources/wordlist.txt DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/resources/)

