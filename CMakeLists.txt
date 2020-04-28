############################## Project ##############################
cmake_minimum_required(VERSION 3.16)
project               (GameDevSDL2 VERSION 1.0.0 LANGUAGES CXX)
set                   (CMAKE_CXX_STANDARD 14)

########################### Dependencies ###########################
find_package(SDL2 REQUIRED)

############################ soureces ############################
add_subdirectory(source)