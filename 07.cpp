#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        return Base::sum(a, b, c) + 10; // adds 10 to the base class sum
    }
};

int main() {
    Base b;
    Derived d;

    cout << "Sum using base class: " << b.sum(1, 2, 3) << endl;
    cout << "Sum using derived class: " << d.sum(1, 2, 3) << endl;

    return 0;
}
