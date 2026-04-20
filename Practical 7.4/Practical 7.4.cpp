#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};


class Rectangle : public Shape {
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }
};

class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Shape* shapes[3];

    shapes[0] = new Rectangle(5, 4);
    shapes[1] = new Circle(3);
    shapes[2] = new Rectangle(2, 6);

    cout << "Areas:\n";

    for (int i = 0; i < 3; i++) {
        cout << shapes[i]->area() << endl;
    }


    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    cout<<"\nHardi Agola-25CE002\n";

    return 0;
}
