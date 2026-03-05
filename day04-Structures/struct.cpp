#include <iostream>
using namespace std;

int main(){
    // Define an anonymous struct and directly declare an array of 3 students
    struct {
        string name;  // stores the name of the student
        int grade;    // stores the grade of the student
        int age;      // stores the age of the student
    } students[3];    // array of 3 students

    // Assigning values to the first student
    students[0].name = "Zeus";
    students[0].grade = 75;
    students[0].age = 17;

    // Assigning values to the second student
    students[1].name = "Aj";
    students[1].grade = 76;
    students[1].age = 16;

    // Assigning values to the third student
    students[2].name = "Jm";
    students[2].grade = 77;
    students[2].age = 16;

    // Loop through all students and print their details
    for(int i = 0; i < 3; i++){
        cout << "Name: " << students[i].name << "\n";   // print name
        cout << "Grade: " << students[i].grade << "\n"; // print grade
        cout << "Age: " << students[i].age << "\n";     // print age
        cout << "---\n"; // Made a separator between students
    }

    return 0; 
}