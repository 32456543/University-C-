#include <iostream>

class TransportVehicle {
protected:
    int speed;
    std::string vehicleType;

public:
    TransportVehicle(int speed, const std::string& vehicleType)
        : speed(speed), vehicleType(vehicleType) {}

    void move() const {
        std::cout << "The " << vehicleType << " двигается со скоростью " << speed << " km/h\n";
    }
};

class Car : public TransportVehicle {
private:
    std::string brand;
    std::string model;

public:
    Car(int speed, const std::string& brand, const std::string& model)
        : TransportVehicle(speed, "car"), brand(brand), model(model) {}

    void honk() const {
        std::cout << brand << " " << model << " сигналит!\n";
    }
};

class Bicycle : public TransportVehicle {
private:
    std::string brand;
    std::string type;

public:
    Bicycle(int speed, const std::string& brand, const std::string& type)
        : TransportVehicle(speed, "bicycle"), brand(brand), type(type) {}

    void ringBell() const {
        std::cout << brand << " велосипед звонит!\n";
    }
};

int main() {
    Car car(60, "Toyota", "Camry");
    car.move();
    car.honk();

    Bicycle bicycle(20, "Giant", "Mountain");
    bicycle.move();
    bicycle.ringBell();

    return 0;
}