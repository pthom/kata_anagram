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


add_executable(anagram anagram.cpp)

add_executable(anagram_test anagram.cpp)

target_compile_definitions(anagram_test PRIVATE 
  "-DDOCTEST_CONFIG_IMPLEMENT_WITH_MAIN -DUNIT_TEST"
  )
target_compile_definitions(anagram PRIVATE 
  "-DDOCTEST_CONFIG_DISABLE"
  )

enable_testing()
add_test(NAME anagram_test COMMAND anagram_test)

