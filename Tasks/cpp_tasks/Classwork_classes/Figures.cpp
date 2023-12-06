#include <iostream>
#include <cmath>
#include <stdexcept>
#include <vector>

class Figure {
public:    
    virtual double calculateArea() const = 0;
    virtual ~Figure() {}
};

class Rectangle : public Figure {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {
        if (length <= 0 || width <= 0) {
            throw std::invalid_argument("1"); 
        }
    }

    double calculateArea() const override {
        return length * width;
    }
};

class Circle : public Figure {
private:
    double radius;

public:
    Circle(double r) : radius(r) {
        if (radius <= 0) {
            throw std::invalid_argument("1"); 
        }
    }

    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    std::vector<Figure*> figures;

    try {
        figures.push_back(new Rectangle(3, 4));
        figures.push_back(new Circle(5));
        figures.push_back(new Rectangle(-1, 2)); 
        figures.push_back(new Circle(0)); 

        for (const auto& figure : figures) {
            try {
                double area = figure->calculateArea();
                std::cout << "Площадь фигуры: " << area << std::endl;
            } catch (const std::invalid_argument& e) {
                std::cerr << "Исключение " << e.what() << ": некорректные параметры фигуры." << std::endl;
            }
        }
    } catch (const std::bad_alloc& e) {
        std::cerr << "Исключение: не удалось выделить память для объекта." << std::endl;
    }

    // Освобождение памяти
    for (const auto& figure : figures) {
        delete figure;
    }

    return 0;
}