#pragma once

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <vector>

class CelestialBody{
    public:
        CelestialBody();
        CelestialBody(double x, double y, double xVelocity, 
        double yVelocity, double bodyMass, std::string planetImage) : xPos(x), yPos(y), xVel(xVelocity), yVel(yVelocity), mass(bodyMass), image(planetImage){};
        
        ~CelestialBody();
    private:
    double xPos;
    double yPos;
    double xVel;
    double yVel;
    double mass;
    std::string image;

};

class Universe{
    public:
    Universe(const char* filename);

    private:
    int numBodies;
    double sSize;
    std::vector <CelestialBody*> system;

};

