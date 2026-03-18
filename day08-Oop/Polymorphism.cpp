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

class RegularDriver : public f1Drivers {
public:
    RegularDriver(string name, string team, int age)
        : f1Drivers(name, team, age) {}

    void race() override {
        cout << getName() << " is racing flat out!\n";
    }
};

class RookieDriver : public f1Drivers {
public:
    RookieDriver(string name, string team, int age)
        : f1Drivers(name, team, age) {}

    void race() override {
        cout << getName() << " is being careful — still learning!\n";
    }
};


int main(){
    RegularDriver driver1("Hamilton",   "Ferrari",  41);
    RegularDriver driver2("Verstappen", "Red Bull", 27);
    RookieDriver  driver3("Antonelli",  "Mercedes", 18);

    // POLYMORPHISM — pointer type is f1Drivers* for all 3
    // but virtual makes C++ call the RIGHT race() each time
    f1Drivers* grid[3] = { &driver1, &driver2, &driver3 };

    for(int i = 0; i < 3; i++){
        grid[i]->race();
    }
}

