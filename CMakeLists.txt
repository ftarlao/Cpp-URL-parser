cmake_minimum_required(VERSION 3.13)
project(UriParser)

set(CMAKE_CXX_STANDARD 14)

add_executable(UriParser main.cpp network/Url.cpp network/Url.h)

find_package(Boost)
IF (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
endif()

set (Boost_USE_STATIC_LIBS OFF) # enable dynamic linking
set (Boost_USE_MULTITHREAD ON)  # enable multithreading
find_package (Boost COMPONENTS REQUIRED regex)

target_link_libraries (UriParser boost_regex)