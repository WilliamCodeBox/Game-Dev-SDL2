add_executable(BareBones main.cpp)
target_include_directories(BareBones PRIVATE "${SDL2_INCLUDE_DIRS}")
target_link_libraries(BareBones PRIVATE "${SDL2_LIBRARIES}")