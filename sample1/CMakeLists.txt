# 指定cmake最小版本为3.12
cmake_minimum_required(VERSION 3.12)

# 设置工程名称
project(sample1)

# 包含头文件
include_directories("../jdk-18.0.1.1/include")
include_directories("../jdk-18.0.1.1/include/win32")

# 添加依赖库路径
link_directories("../jdk-18.0.1.1/lib")

# 添加可执行文件
add_executable(${PROJECT_NAME} main.cpp)

# 链接依赖库
target_link_libraries(${PROJECT_NAME} jvm)