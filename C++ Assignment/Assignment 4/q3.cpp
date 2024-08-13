// Write a program as per following details
// Create one base class Teacher
// Data members Name, Department, College name, Email id.
// Create sub classes for Math Teacher, English Teacher, and Science Teacher Data
// member Qualification, Expertise and salary.
// Display following details for each teacher
// Name:
// Department:
// College name:
// Email id:
// Qualification:
// Expertise:
// Salary:

#include <iostream>
#include <string>
using namespace std;

class Teacher {
protected:
    string name;
    string department;
    string collegeName;
    string emailId;

public:
    Teacher(string n, string d, string c, string e)
        : name(n), department(d), collegeName(c), emailId(e) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "College name: " << collegeName << endl;
        cout << "Email id: " << emailId << endl;
    }

    ~Teacher() {}
};

class MathTeacher : public Teacher {
private:
    string qualification;
    string expertise;
    double salary;

public:
    MathTeacher(string n, string d, string c, string e, string q, string ex, double s)
        : Teacher(n, d, c, e), qualification(q), expertise(ex), salary(s) {}

    void display()  {
        Teacher::display();
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << endl;
        cout << "Salary: " << salary << endl;
    }
};

class EnglishTeacher : public Teacher {
private:
    string qualification;
    string expertise;
    double salary;

public:
    EnglishTeacher(string n, string d, string c, string e, string q, string ex, double s)
        : Teacher(n, d, c, e), qualification(q), expertise(ex), salary(s) {}

    void display()  {
        Teacher::display();
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << endl;
        cout << "Salary: " << salary << endl;
    }
};

class ScienceTeacher : public Teacher {
private:
    string qualification;
    string expertise;
    double salary;

public:
    ScienceTeacher(string n, string d, string c, string e, string q, string ex, double s)
        : Teacher(n, d, c, e), qualification(q), expertise(ex), salary(s) {}

    void display()  {
        Teacher::display();
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    MathTeacher mathTeacher("Vivek", "Mathematics", "ABC College", "vivek@abc.edu", "PhD in Mathematics", "Algebra, Calculus", 60000);
    EnglishTeacher englishTeacher("Sapna", "English", "XYZ College", "sapna@xyz.edu", "MA in English", "Literature, Composition", 55000);
    ScienceTeacher scienceTeacher("Ayush", "Science", "LMN College", "ayush@lmn.edu", "PhD in Physics", "Physics, Chemistry", 65000);

    cout << "Math Teacher Details:" << endl;
    mathTeacher.display();
    cout << endl;

    cout << "English Teacher Details:" << endl;
    englishTeacher.display();
    cout << endl;

    cout << "Science Teacher Details:" << endl;
    scienceTeacher.display();
    cout << endl;

    return 0;
}
