cmake_minimum_required(VERSION 3.11)
project(PS5 C)

set(CMAKE_C_STANDARD 99)

add_executable(PS5 main.c rpn.c rpn.h errors.h errors.c stack.c stack.h node.c node.h rpn-converter.c rpn-converter.h)