cmake_minimum_required(VERSION 3.24)
project(QuadraticEquations)

set(CMAKE_CXX_STANDARD 17)

add_library(quadratic SHARED quadratic.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/b796f7d44681514f58a683a3a71ff17c94edb0c1.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(quadratic_test quadratic_test.cpp quadratic.cpp)
target_link_libraries(quadratic_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(quadratic_test)
