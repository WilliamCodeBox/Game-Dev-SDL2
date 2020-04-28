add_executable(Modularization main.cpp)
target_include_directories(BareBones PRIVATE "${SDL2_INCLUDE_DIRS}" "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(BareBones PRIVATE "${SDL2_LIBRARIES}")