#include <iostream>
using namespace std;

class A;
class B;
class C;

class FriendClass {
public:
    void displayData(A &a, B &b, C &c);
};

class A {
private:
    int dataA = 1;
    friend class FriendClass;
};

class B {
protected:
    int dataB = 2;
    friend class FriendClass;
};

class C {
private:
    int dataC = 3;
    friend class FriendClass;
};

void FriendClass::displayData(A &a, B &b, C &c) {
    cout << "Data from A: " << a.dataA << "\nData from B: " << b.dataB << "\nData from C: " << c.dataC << endl;
}

int main() {
    A a;
    B b;
    C c;
    FriendClass f;
    f.displayData(a, b, c);
    return 0;
}
