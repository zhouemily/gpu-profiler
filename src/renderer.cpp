#include "renderer.h"
#include <GL/gl.h>
#include <cstdlib>

Renderer::Renderer(int nodes, int comp)
    : numNodes(nodes), complexity(complexity) {
    positions.resize(nodes * 2);
    for (int i = 0; i < nodes * 2; i++) {
        positions[i] = (float)rand() / RAND_MAX;
    }
}

void Renderer::render() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    for (int i = 0; i < numNodes; i++) {
        glVertex2f(positions[i * 2], positions[i * 2 + 1]);
    }
    glEnd();
}
