cmake_minimum_required(VERSION 3.20)
project(MyRunner C)

file(GLOB SRC
        "*.c"
        )
file(GLOB MY
        "lib/my/*.c"
        )
file(GLOB LINKED_LIST
        "lib/my_linkedlist/*.c"
        )

set(CMAKE_C_STANDARD 99)

include_directories("include")
add_executable(MyRunner ${SRC} ${MY} ${LINKED_LIST})
