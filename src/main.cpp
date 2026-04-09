#include "renderer.h"
#include "profiler.h"
#include <GLFW/glfw3.h>
#include <cstdlib>

int main(int argc, char** argv) {
    int numNodes = (argc > 1) ? atoi(argv[1]) : 5000;
    int complexity = (argc > 2) ? atoi(argv[2]) : 1;

    glfwInit();
    GLFWwindow* window = glfwCreateWindow(800, 600, "GPU Profiler", NULL, NULL);
    glfwMakeContextCurrent(window);

    Renderer renderer(numNodes, complexity);
    Profiler profiler;

    while (!glfwWindowShouldClose(window)) {
        profiler.beginFrame();
        renderer.render();
        profiler.endFrame();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
