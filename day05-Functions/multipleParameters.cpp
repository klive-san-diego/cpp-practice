#include <iostream>
using namespace std;

// Function that will print the name and age 
void ageName(string name, int age){   //Takes two parameter which is name and age
    cout << "Hello my name is " << name << " I'am " << age << " years old" << "\n"; // Prints name and age 
}

int main(){
    //Calls the function and its arguments
    ageName("Klive" , 21); 
    ageName("Zeus" , 22);
    ageName("Jm" , 22);
    ageName("Arq" , 23);
    return 0; 
}