#include <iostream>
using namespace std;

class A;
class B;
class C;

void displayData(A &a, B &b, C &c);

class A {
private:
    int dataA = 10;
    friend void displayData(A &a, B &b, C &c);
};

class B {
protected:
    int dataB = 20;
    friend void displayData(A &a, B &b, C &c);
};

class C {
private:
    int dataC = 30;
    friend void displayData(A &a, B &b, C &c);
};

void displayData(A &a, B &b, C &c) {
    cout << "Data from A: " << a.dataA << "\nData from B: " << b.dataB << "\nData from C: " << c.dataC << endl;
}

int main() {
    A a;
    B b;
    C c;
    displayData(a, b, c);
    return 0;
}
