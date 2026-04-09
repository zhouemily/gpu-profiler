#include "profiler.h"
#include <GLFW/glfw3.h>

void Profiler::beginFrame() {
    lastTime = glfwGetTime();
}

void Profiler::endFrame() {
    double now = glfwGetTime();
    frameTimes.push_back((now - lastTime) * 1000.0);
}
