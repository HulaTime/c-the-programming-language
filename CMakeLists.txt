cmake_minimum_required(VERSION 3.24)
project(c_the_programming_language C)

set(CMAKE_C_STANDARD 11)

add_executable(c_the_programming_language
        hello-world.c chapter-1/exercise-1.3.c fahr-celsius-table.c chapter-1/exercise-1.4.c copy-input-to-output.c chapter-1/exercise-1.6.c chapter-1/exercise-1.7.c)
