#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    string department;
    string course;

public:
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}

    friend void displayStudentDetails(const Student &s);
};

void displayStudentDetails(const Student &s) {
    cout << "Name: " << s.name << "\nAge: " << s.age << "\nDepartment: " << s.department << "\nCourse: " << s.course << endl;
}

int main() {
    Student s("Alice", 20, "Computer Science", "C++ Programming");
    displayStudentDetails(s);
    return 0;
}
