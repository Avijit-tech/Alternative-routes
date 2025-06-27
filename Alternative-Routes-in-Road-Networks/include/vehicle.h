#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
public:
    int currentVertex;
    int nextVertex;
    double speed;
    double distanceTraveled;

    Vehicle(int current, int next, double speed);
    void updatePosition(double travelTime);
};

#endif 