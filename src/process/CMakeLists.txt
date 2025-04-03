project(process)

add_library(
    ${PROJECT_NAME}
    SHARED
    process.cpp
)

target_include_directories(${PROJECT_NAME} 
PUBLIC 
${PNC_MAP_Dir} # 确保pnc_map头文件路径
)

target_link_libraries(${PROJECT_NAME} PUBLIC pnc_map)

target_link_libraries(${PROJECT_NAME} PUBLIC Eigen3::Eigen)