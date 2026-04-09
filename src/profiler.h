#pragma once
#include <vector>

class Profiler {
public:
    void beginFrame();
    void endFrame();
private:
    double lastTime;
    std::vector<double> frameTimes;
};
