cmake_minimum_required(VERSION 3.8)
project(p4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES p4.cpp SequenceEnum.cpp SequenceEnum.h SeqExtract.cpp SeqExtract.h SpasEnum.cpp SpasEnum.h)
add_executable(p4 ${SOURCE_FILES})