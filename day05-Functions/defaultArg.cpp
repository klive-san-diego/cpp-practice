#include <iostream>
using namespace std;

/*Creates a function that prints a food name 
if no arguements is given. It will use adobo as the default*/
void myFunction(string food = "Adobo"){ // Default paramenter adobo
    cout << food << "\n"; // Prints the food name
}

int main(){
    myFunction();                  // No arguement so prints adobo as default
    myFunction("Sinigang");        // Passes sinigang as arguement
    myFunction("Kare-kare");       // Passes kare kare as arguement
    myFunction("Fried Chicken");   // Passes fried chicken as arguement
    return 0; // ends the program successfully
}