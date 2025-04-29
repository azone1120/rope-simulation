#include <iostream>
#include <fstream>
#include <vector>

struct Ball {
    double x, y;
    double vx, vy;
};

int main() {
    const double gravity = 9.81;    // Gravity constant [m/s^2]
    const double dt = 0.01;         // Time step size [s]
    const int steps = 1000;         // Number of simulation steps
}