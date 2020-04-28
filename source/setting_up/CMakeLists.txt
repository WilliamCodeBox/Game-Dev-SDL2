add_executable(SettingUp main.cpp)
target_include_directories(SettingUp PRIVATE "${SDL2_INCLUDE_DIRS}")
target_link_libraries(SettingUp PRIVATE "${SDL2_LIBRARIES}")