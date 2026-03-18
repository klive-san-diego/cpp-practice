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

    virtual void race() = 0;
    virtual ~f1Drivers(){}
}; 



int main(){
   

}

