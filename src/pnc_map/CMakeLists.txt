project(pnc_map)

add_library(${PROJECT_NAME} SHARED pnc_map.cpp)

# 添加头文件路径公开（关键修复点）
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})