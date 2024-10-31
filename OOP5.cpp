#include <iostream>
#include <cmath>

using namespace std;

// Абстрактний базовий клас
class Shape {
public:
    virtual double getVolume() const = 0; // Чисто віртуальна функція
};

// Клас Паралелепіпед
class Parallelepiped : public Shape {
private:
    double a, b, c;
public:
    Parallelepiped(double a, double b, double c) : a(a), b(b), c(c) {}

    double getVolume() const override {
        return a * b * c;
    }
};

// Клас Піраміда
class Pyramid : public Shape {
private:
    double a, b, h;
public:
    Pyramid(double a, double b, double h) : a(a), b(b), h(h) {}

    double getVolume() const override {
        return (a * b * h) / 3.0;
    }
};

// Клас Куля
class Sphere : public Shape {
private:
    double r;
public:
    Sphere(double r) : r(r) {}

    double getVolume() const override {
        return (4.0 / 3.0) * 3.14 * pow(r, 3);
    }
};

// Клас Тетраедр
class Tetrahedron : public Shape {
private:
    double a;
public:
    Tetrahedron(double a) : a(a) {}

    double getVolume() const override {
        return (pow(a, 3) / (6 * sqrt(2)));
    }
};

int main() {
    Parallelepiped parallelepiped(3, 4, 5);
    Pyramid pyramid(3, 4, 5);
    Sphere sphere(3);
    Tetrahedron tetrahedron(3);

    cout << "Volume of Parallelepiped: " << parallelepiped.getVolume() << endl;
    cout << "Volume of Pyramid: " << pyramid.getVolume() << endl;
    cout << "Volume of Sphere: " << sphere.getVolume() << endl;
    cout << "Volume of Tetrahedron: " << tetrahedron.getVolume() << endl;

    return 0;
}
