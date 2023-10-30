cmake_minimum_required(VERSION 3.26)
project(32_5_1_Film_Info_from_On_line_Cinema)

set(CMAKE_CXX_STANDARD 23)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(32_5_1_Film_Info_from_On_line_Cinema main.cpp)

target_link_libraries(32_5_1_Film_Info_from_On_line_Cinema PRIVATE nlohmann_json::nlohmann_json)