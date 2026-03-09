// Topic: Parameters and Arguments
#include <iostream>
using namespace std; 

    //Function that greets user by name
    void greetUser(string name){ //Takes a string parameter called name
        cout << "hi " << name << " nice to meet you!"; // Prints the greeting with the name
    }

    int main(){
        greetUser("Klive"); // Calls the function and passes Klive as the argument
        return 0;// ends the program successfully
    }
    

