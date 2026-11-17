#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) {
        side = s;
    }

    double calculateArea() override {
        return side * side;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Square s(5.0);
    Circle c(3.0);

    cout << "Area of Square: " << s.calculateArea() << endl;
    cout << "Area of Circle: " << c.calculateArea() << endl;

    return 0;
}