#include <iostream>
using namespace std;

class Vehicle {
public:
    double calculateTime(double distance) const {
        return distance / 50.0;
    }
    double calculateCost(double distance, double weight) const {
        return distance * 0.3 + weight * 0.05;
    }
};

class Car : public Vehicle {
public:
    double calculateTime(double distance) const {
        return distance / 80.0;
    }
    double calculateCost(double distance, double weight) const {
        return distance * 0.5 + weight * 0.1;
    }
};

class Bicycle : public Vehicle {
public:
    double calculateTime(double distance) const {
        return distance / 20.0;
    }
    double calculateCost(double distance, double weight) const {
        return distance * 0.05;
    }
};

class Carriage : public Vehicle {
public:
    double calculateTime(double distance) const {
        return distance / 10.0;
    }
    double calculateCost(double distance, double weight) const {
        return distance * 0.3 + weight * 0.2;
    }
};


int main() {
    Car car;
    Bicycle bicycle;
    Carriage carriage;

    double distance = 100;
    double weight = 50;

    cout << "Distance: " << distance << " km, Weight: " << weight << " kg\n\n";

    cout << "Car:\nTime: " << car.calculateTime(distance)
        << " hours\nCost: " << car.calculateCost(distance, weight) << " RUB\n\n";

    cout << "Bicycle:\nTime: " << bicycle.calculateTime(distance)
        << " hours\nCost: " << bicycle.calculateCost(distance, weight) << " RUB\n\n";

    cout << "Carriage:\nTime: " << carriage.calculateTime(distance)
        << " hours\nCost: " << carriage.calculateCost(distance, weight) << " RUB\n";

    return 0;
}