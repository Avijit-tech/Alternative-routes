#include "vehicle.h"

Vehicle::Vehicle(int current, int next, double speed) : currentVertex(current), nextVertex(next), speed(speed), distanceTraveled(0) {}

void Vehicle::updatePosition(double travelTime) {
    distanceTraveled += speed * travelTime;
}