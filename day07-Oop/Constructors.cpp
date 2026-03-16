#include <iostream>
using namespace std;

// Class representing an Employee
class Employee{
    public:
    string Name;
    string Company;
    int Age;

    // Prints the employee's details
    void introduce(){
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    // Constructor - automatically called when an Employee object is created
    // Takes name, company, and age as arguments to initialize the object
    Employee(string name, string company, int age){
        Name = name;
        Age = age;
        Company = company;
    }
};


int main(){
    // Creating employee1 object - constructor is called here with the given arguments
    Employee employee1 = Employee("Klive", "Amazon", 21);
    employee1.introduce();

    // Creating employee2 object - constructor is called here with the given arguments
    Employee employee2 = Employee("GOat", "Amazon", 21);
    employee2.introduce();
}