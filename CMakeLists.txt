cmake_minimum_required (VERSION 3.2.0)
set (CMAKE_CXX_STANDARD 11)

# Add hunter for easy dependency management
include("cmake/HunterInit.cmake")

project(lab)

# Add boost
hunter_add_package(Boost)
find_package(Boost CONFIG REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

# Add doctest
include_directories("thirdparty/doctest")


add_executable(lab
    lab.cpp
    Readme.md
)

add_executable(lab_test
    lab.cpp
)

target_compile_definitions(lab_test PRIVATE 
  "-DDOCTEST_CONFIG_IMPLEMENT_WITH_MAIN -DUNIT_TEST"
  )
target_compile_definitions(lab PRIVATE 
  "-DDOCTEST_CONFIG_DISABLE"
  )

enable_testing()
add_test(NAME lab_test COMMAND lab_test)

