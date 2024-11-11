#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Student {
    T name;
    T department;
    int age;
    T course;

public:
    Student(T n, int a, T d, T c) : name(n), age(a), department(d), course(c) {}

    void display() {
        cout << "Name: " << name << "\nAge: " << age << "\nDepartment: " << department << "\nCourse: " << course << endl;
    }
};

int main() {
    Student<string> s("Alice", 20, "Computer Science", "C++ Programming");
    s.display();
    return 0;
}
