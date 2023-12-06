#include <iostream>
#include <cmath>

class Shape {
public:

    virtual double calculateArea() const = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : width(width), height(height) {}

    double calculateArea() const override {
        return width * height;
    }

private:
    double width;
    double height;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}

    double calculateArea() const override {
        return M_PI * radius * radius;
    }

private:
    double radius;
};

int main() {
    Rectangle rectangle(5, 10);
    Circle circle(3);

    std::cout << "Площадь прямоугольника: " << rectangle.calculateArea() << " кв. ед." << std::endl;
    std::cout << "Площадь круга: " << circle.calculateArea() << " кв. ед." << std::endl;

    return 0;
}