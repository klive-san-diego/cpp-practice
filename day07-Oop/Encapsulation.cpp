#include <iostream>
using namespace std;

// Class representing a Formula 1 driver
class f1Drivers{
    private:
    // Private data members - only accessible within the class (encapsulation)
    string Name;
    string Team;
    int Age;

    public:
    // Setter for Name
    void setName(string name){
        Name = name;
    }

    // Getter for Name
    string getName(){
        return Name;
    }
    
    // Setter for Team
    void setTeam(string team){
        Team = team;
    }

    // Getter for Team
    string getTeam(){
        return Team;
    }

    // Setter for Age
    void setAge(int age){
        Age = age;
    }

    // Getter for Age
    int getAge(){
        return Age;
    }
    
    // Prints a short introduction of the driver
    void introduce(){
        cout << "Hi im " << Name << endl;
        cout << "I race for " << Team << endl;
        cout << "and I'm " << Age << " years old." << endl;
    }

    // Parameterized constructor to initialize driver details
    f1Drivers(string name, string team, int age){
        Name = name;
        Team = team;
        Age = age;
    }
};



int main(){
    // Creating driver objects using the parameterized constructor
    f1Drivers driver1 = f1Drivers("Hamilton", "Ferrari", 41); // Fixed typo: "Hamillton" -> "Hamilton"
    driver1.introduce();

    f1Drivers driver2 = f1Drivers("Verstappen", "Red Bull", 28);
    driver2.introduce();

    // Using setter to update driver1's team after object creation
    driver1.setTeam("Mercedes");
   
    // Using getters to display driver1's name and updated team
    cout << driver1.getName() << " old team is " << driver1.getTeam();

}
