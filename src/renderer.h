#pragma once
#include <vector>

class Renderer {
public:
    Renderer(int nodes, int complexity);
    void render();

private:
    int numNodes;
    int complexity;
    std::vector<float> positions;
};
