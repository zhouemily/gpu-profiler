cmake_minimum_required(VERSION 3.10)
project(GPUProfiler)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(gpu_profiler
    src/main.cpp
    src/renderer.cpp
    src/profiler.cpp
)

target_link_libraries(gpu_profiler
    OpenGL::GL
    glfw
)
