#include <iostream>
using namespace std;

class Car {
private:
    int x;
public:
    Car(int x) {
        this->x = x;
    }
    void move() {
        x++;
    }
    int getX() {
        return x;
    }
};

int main() {
    Car car(0);
    for (int i = 0; i < 10; i++) {
        car.move();
        cout << "Car X coordinate: " << car.getX() << endl;
    }
    return 0;
}
