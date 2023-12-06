#include <iostream>
#include <string>


class Person {
public:
    Person(std::string name, int age) : name(name), age(age) {}

    void displayInfo() const {
        std::cout << "Имя: " << name << ", Возраст: " << age << " лет." << std::endl;
    }

private:
    std::string name;
    int age;
};


class House {
public:
    House(int roomCount, std::string address) : roomCount(roomCount), address(address) {}

    void displayInfo() const {
        std::cout << "Дом по адресу: " << address << ", Количество комнат: " << roomCount << "." << std::endl;
    }

private:
    int roomCount;
    std::string address;
};

class Resident : public Person {
public:
    Resident(std::string name, int age, House* house) : Person(name, age), house(house) {}

    void linkWithHouse(House* newHouse) {
        house = newHouse;
    }

    void displayResidentInfo() const {
        displayInfo();
        if (house != nullptr) {
            std::cout << "Житель этого дома:" << std::endl;
            house->displayInfo();
        } else {
            std::cout << "Этот житель не привязан к какому-либо дому." << std::endl;
        }
    }

private:
    House* house;
};

int main() {
    House house1(3, "Улица Первая, 1");
    Resident resident1("Иван", 25, &house1);

    std::cout << "Информация о жителе и его доме:" << std::endl;
    resident1.displayResidentInfo();

    House house2(2, "Улица Вторая, 2");
    resident1.linkWithHouse(&house2);

    std::cout << "\nОбновленная информация о жителе и его доме:" << std::endl;
    resident1.displayResidentInfo();

    return 0;
}
