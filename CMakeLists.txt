cmake_minimum_required(VERSION 3.29.0)

project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/chovysky/cmake_planning_demo.git"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

#变量和目录设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_MAP_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map) # 确保变量名与子目录中使用的 PNC_MAP_Dir 一致

#添加子文件
add_subdirectory(src) # 保持原有结构，但需确保子目录层级正确