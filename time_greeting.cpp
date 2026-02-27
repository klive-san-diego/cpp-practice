#include <iostream>
using namespace std;

int main(){
    //Declare integer variable to store user input
    int time;

    // Ask the user to enter the current time
    cout << "Enter time today: ";
    cin >> time;
    
    // Determine the greeting message based on the time using a ternary operator
    string state = (time < 12) ? "good morning"         // If time is less than 12, say good morning
    : (time == 12) ? "noon"                             // If time is exactly 12, say noon
    : (time > 12 && time < 18) ? "good afternoon"       // If time is between 12 and 18, say good afternoon
    : "good eve";                                       // Otherwise, say good evening

    
    // Output the message
    cout << state;

    return 0;    // Indicate that the program ended successfully
}