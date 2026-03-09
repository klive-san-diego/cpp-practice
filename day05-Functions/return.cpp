// Topic: Return Values
#include <iostream> 
using namespace std;

//Function that will triple the number
int tripleNum(int x){ // Takes one integer parameter called x
    return x * 3;  // Multiplies the number by 3 and return result
}

int main(){
    // Loop that will start at 1 and ends in 5
    for(int i = 1; i <= 5; i++){ // i starts at 1 and increments 1 each time
        cout << "Triple of " << i << " is " << tripleNum(i) << "\n"; //prints i and triple it
        return 0;
    }
}