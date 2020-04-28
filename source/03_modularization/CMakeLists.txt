add_executable(Modularization main.cpp gama.cpp)
target_include_directories(Modularization PRIVATE "${SDL2_INCLUDE_DIRS}" "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(Modularization PRIVATE "${SDL2_LIBRARIES}")