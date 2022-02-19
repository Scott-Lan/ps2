#include "CelestialBody.hpp"


Universe::Universe(const char* fileName){
    std::ifstream in;
    in.open(fileName);
    //if file is open
    if(in.is_open()){
        std::string line;
        getline(in, line);
        std::cout << "first line: " << line << std::endl;

        
        //get total number of bodies to create
        numBodies = stoi(line);

        //get size of system
        getline(in, line);
        sSize = stod(line);
    
        std::cout << "second lines value (double): " << sSize << std::endl;

        //init bodies to class from file
        
            double tempX, tempY, tempXVel, tempYVel, tempMass;
            std::string tempImage;
            while(in >> tempX >> tempY >> tempXVel >> tempYVel >> tempMass >> tempImage)
            {
                std::cout << tempX << " " << tempY << " " << tempXVel << " " << tempYVel << " " << tempMass << std::endl;
            CelestialBody* tempObj = new CelestialBody(tempX, tempY, tempXVel, tempYVel, tempMass, tempImage);
            system.push_back(tempObj);
            }
        
    }

}
CelestialBody::CelestialBody()
{
    xPos = 0;
    yPos = 0;
    xVel = 0;
    yVel = 0;
    mass = 0;
    image = "";
}
// CelestialBody::CelestialBody(double x, double y, double xVelocity, 
//         double yVelocity, double bodyMass, std::string planetImage)
// {
//     xPos = x;
//     yPos = y;
//     xVel = xVelocity;
//     yVel = yVelocity;
//     mass = bodyMass;
//     image = planetImage;

// }
CelestialBody::~CelestialBody()
{
    delete[] this;

}