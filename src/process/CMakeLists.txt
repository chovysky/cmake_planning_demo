project(process)

add_library(
    ${PROJECT_NAME}
    SHARED
    process.cpp
)

target_include_directories(${PROJECT_NAME} 
PUBLIC 
${CMAKE_CURRENT_SOURCE_DIR} # 补充：将当前目录公开为头文件路径
${PNC_MAP_Dir} # 确保pnc_map头文件路径
)

target_link_libraries(${PROJECT_NAME} PUBLIC pnc_map)