#include <iostream>
using namespace std;

class Shape {
protected:
    string color;
public:
    Shape(string c) : color(c) {}
    virtual void draw() = 0;
    virtual double area() = 0;
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double w, double h, string c) : Shape(c), w(w), h(h) {}
    void draw() override { cout << "Drawing Rectangle\n"; }
    double area() override { return w * h; }
};

class Circle : public Shape {
    double r;
public:
    Circle(double r, string c) : Shape(c), r(r) {}
    void draw() override { cout << "Drawing Circle\n"; }
    double area() override { return 3.14 * r * r; }
};

int main() {
    Shape* s1 = new Rectangle(5, 10, "Red");
    Shape* s2 = new Circle(3, "Blue");

    s1->draw();
    cout << "Area: " << s1->area() << endl;

    s2->draw();
    cout << "Area: " << s2->area() << endl;

    delete s1;
    delete s2;

    return 0;
}
