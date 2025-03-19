#include <iostream>
#include <string>
using namespace std;
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;
};
void inputStudentDetails(Student &student) {
    cout << "Enter First Name: ";
    cin >> student.firstName;
    cout << "Enter Last Name: ";
    cin >> student.lastName;
    cout << "Enter Roll Number: ";
    cin >> student.rollNumber;
    cout << "Enter Marks: ";
    cin >> student.marks;
}

void displayStudentDetails(const Student &student) {
    cout << "\nStudent Details:\n";
    cout << "First Name: " << student.firstName << endl;
    cout << "Last Name: " << student.lastName << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: " << student.marks << endl;
}
int main() {
    Student student;
    inputStudentDetails(student);
    displayStudentDetails(student);
    return 0;
}
