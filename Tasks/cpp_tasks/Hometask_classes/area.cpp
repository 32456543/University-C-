#include <iostream>
#include <cmath>
#include <vector>


class Shape {
public:
    virtual double calculateArea() const = 0;

    virtual ~Shape() {}
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
    std::vector<Shape*> shapes;
    shapes.push_back(new Rectangle(5, 10));
    shapes.push_back(new Circle(3));

    std::cout << "Площади фигур:" << std::endl;
    for (const auto& shape : shapes) {
        std::cout << "Площадь: " << shape->calculateArea() << std::endl;
    }

    for (const auto& shape : shapes) {
        delete shape;
    }

    return 0;
}