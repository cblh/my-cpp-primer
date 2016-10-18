#project (my_cpp_primer_answer CXX)
#
#if (CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
#    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ansi -pedantic -Wall")
#endif()
#
#
#file(GLOB_RECURSE Foo_SOURCES "./ch01/*.cpp")
#file(GLOB_RECURSE Foo_HEADERS "./ch01/*.h")
#
#set (Foo_INCLUDE_DIRS "")
#foreach (_headerFile ${Foo_HEADERS})
#    get_filename_component(_dir ${_headerFile} PATH)
#    list (APPEND Foo_INCLUDE_DIRS ${_dir})
#endforeach()
#list(REMOVE_DUPLICATES Foo_INCLUDE_DIRS)
#include_directories(${Foo_INCLUDE_DIRS})

#[[
add_executable (FooExe ${Foo_SOURCES})
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(./ch01 DIR_SRCS)

# 指定生成目标
add_executable(my_cpp_primer_answer ${DIR_SRCS})
]]

#PROJECT (HELLO)
#SET(SRC_LIST "./ch01/ex1_1.cpp" "./ch01/ex1_9.cpp")
#MESSAGE(STATUS "This is BINARY dir " ${PROJECT_BINARY_DIR})
#MESSAGE(STATUS "This is SOURCE dir " ${PROJECT_SOURCE_DIR})
##ADD_EXECUTABLE(hello ${SRC_LIST})
#ADD_EXECUTABLE(hello "./ch01/ex1_1.cpp" "./ch01/ex1_9.cpp")

cmake_minimum_required (VERSION 2.6)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++0x")
PROJECT(burlinchen_cpp_primer_answer CXX)
#ADD_SUBDIRECTORY(ch01)
ADD_SUBDIRECTORY(ch02)
ADD_SUBDIRECTORY(ch03)