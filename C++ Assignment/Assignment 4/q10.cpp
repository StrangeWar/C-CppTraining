// 10. We want to calculate the total marks of each student of a class in Physics,Chemistry and
// Mathematics and the average marks of the class. The number of students in the class are
// entered by the user. Create a class named Marks with data members for roll number, name
// and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry
// and Mathematics, which are used to define marks in individual subject of each student. Roll
// number of each student will be generated automatically.

#include <iostream>
#include <string>

class Marks {
private:
    static int roll_number_counter;
    int roll_number;
    std::string name;
    int physics_marks;
    int chemistry_marks;
    int mathematics_marks;

public:
    Marks() : roll_number(0), physics_marks(0), chemistry_marks(0), mathematics_marks(0) {}

    void setData(const std::string& student_name, int physics, int chemistry, int math) {
        name = student_name;
        physics_marks = physics;
        chemistry_marks = chemistry;
        mathematics_marks = math;
        roll_number = ++roll_number_counter;
    }

    int getTotalMarks() const {
        return physics_marks + chemistry_marks + mathematics_marks;
    }

    int getRollNumber() const {
        return roll_number;
    }

    std::string getName() const {
        return name;
    }
};

int Marks::roll_number_counter = 0;

int main() {
    int num_students;
    std::cout << "Enter the number of students: ";
    std::cin >> num_students;

    // Dynamically allocate array of students
    Marks* students = new Marks[num_students];

    for (int i = 0; i < num_students; ++i) {
        std::string name;
        int physics, chemistry, math;

        std::cout << "Enter details for student " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Physics marks: ";
        std::cin >> physics;
        std::cout << "Chemistry marks: ";
        std::cin >> chemistry;
        std::cout << "Mathematics marks: ";
        std::cin >> math;

        students[i].setData(name, physics, chemistry, math);
    }

    int total_marks = 0;
    for (int i = 0; i < num_students; ++i) {
        total_marks += students[i].getTotalMarks();
    }

    double average_marks = static_cast<double>(total_marks) / num_students;

    std::cout << "\nTotal Marks of Each Student:\n";
    for (int i = 0; i < num_students; ++i) {
        std::cout << "Roll Number: " << students[i].getRollNumber()
                  << ", Name: " << students[i].getName()
                  << ", Total Marks: " << students[i].getTotalMarks() << "\n";
    }

    std::cout << "Average Marks of the Class: " << average_marks << "\n";

    // Deallocate the memory
    delete[] students;

    return 0;
}
