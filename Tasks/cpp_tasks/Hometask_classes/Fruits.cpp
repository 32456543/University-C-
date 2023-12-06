#include <iostream>
#include <string>
#include <vector>


class Fruit {
public:
    virtual void getVitamins() const {
        std::cout << "Этот фрукт содержит витамины." << std::endl;
    }
};


class Apple : public Fruit {
public:
    void getVitamins() const override {
        std::cout << "Яблоко содержит витамин C." << std::endl;
    }
};


class Orange : public Fruit {
public:
    void getVitamins() const override {
        std::cout << "Апельсин содержит витамин C и фолиевую кислоту." << std::endl;
    }
};

class TransportVehicle {
public:
    TransportVehicle(double speed, std::string type) : speed(speed), type(type) {}

    virtual void getInfo() const {
        std::cout << "Транспортное средство типа " << type << " со скоростью " << speed << " км/ч." << std::endl;
    }

protected:
    double speed;
    std::string type;
};

class Car : public TransportVehicle {
public:
    Car(double speed, std::string type, std::string brand) : TransportVehicle(speed, type), brand(brand) {}

    void getInfo() const override {
        std::cout << "Автомобиль марки " << brand << ", типа " << type << " со скоростью " << speed << " км/ч." << std::endl;
    }

private:
    std::string brand;
};

int main() {
    std::vector<Fruit*> fruits;
    fruits.push_back(new Apple());
    fruits.push_back(new Orange());

    std::cout << "Информация о витаминах во фруктах:" << std::endl;
    for (const auto& fruit : fruits) {
        fruit->getVitamins();
    }

    for (const auto& fruit : fruits) {
        delete fruit;
    }

    TransportVehicle vehicle1(60, "Велосипед");
    Car car1(120, "Автомобиль", "Toyota");

    std::cout << "\nИнформация о транспортных средствах:" << std::endl;
    vehicle1.getInfo();
    car1.getInfo();

    return 0;
}
