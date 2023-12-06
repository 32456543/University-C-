#include <iostream>
#include <string>

class Dog {
public:

    Dog(std::string name, int age) : name(name), age(age) {}

    void displayInfo() {
        std::cout << "Собака: " << name << ", Возраст: " << age << " лет." << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    Dog dog1("Барон", 3);
    Dog dog2("Рекс", 2);
    Dog dog3("Лайка", 4);

    std::cout << "Информация о собаках:" << std::endl;
    dog1.displayInfo();
    dog2.displayInfo();
    dog3.displayInfo();

    return 0;
}
