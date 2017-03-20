cmake_minimum_required (VERSION 3.2.0)
set (CMAKE_CXX_STANDARD 11)

# Add hunter for easy dependency management
include("cmake/HunterInit.cmake")

project(anagram)

# Add boost
hunter_add_package(Boost)
find_package(Boost CONFIG REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

# Add doctest
include_directories("thirdparty/doctest")

# Add main target and test target
add_executable(anagram anagram.cpp)
add_executable(anagram_test anagram.cpp)
target_compile_definitions(anagram_test PRIVATE "-DDOCTEST_CONFIG_IMPLEMENT_WITH_MAIN -DUNIT_TEST")
target_compile_definitions(anagram PRIVATE  "-DDOCTEST_CONFIG_DISABLE")

# Enable tests and register test with `make test`
enable_testing()
add_test(NAME anagram_test COMMAND anagram_test)

# Copy resources to runtime directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
file(COPY resources/wordlist.txt DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/resources/)

