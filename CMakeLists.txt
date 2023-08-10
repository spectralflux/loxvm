cmake_minimum_required(VERSION 3.25)
project(loxvm C)

set(CMAKE_C_STANDARD 17)

add_executable(loxvm main.c common.h chunk.h chunk.c memory.h memory.c debug.h debug.c value.h value.c vm.h vm.c compiler.h compiler.c scanner.h scanner.c
        object.h
        object.c)
