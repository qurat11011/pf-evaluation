#include <iostream>
#include <string>

using namespace std;

// Define the structure named Student
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    // Member function to display student information
    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int numStudents;

    // Ask the user for the number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;
    Student* students = new Student[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nEntering details for student " << (i + 1) << ":\n";
        cout << "Enter First Name: ";
        cin >> students[i].firstName;
        cout << "Enter Last Name: ";
        cin >> students[i].lastName;
        cout << "Enter Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Enter Marks: ";
        cin >> students[i].marks;
    }

    // Display details for each student
    cout << "\nStudent Information:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nDetails for student " << (i + 1) << ":\n";
        // Use a pointer to access the student
        Student* ptr = &students[i];
        ptr->displayStudentInfo(); // Call the member function using the pointer
    }

    // Free the dynamically allocated memory
    delete[] students;

    return 0;
}
