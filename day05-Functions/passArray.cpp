#include <iostream>
using namespace std;

// A function that will calculate the sum of the array
void sumArray(int numbers[] , int size){    // Takes an array and its size as parameters
    int total = 0;  // Stores the running sum to 0
    for(int i = 0; i < 5; i++){ // loops each element
        total += numbers[i]; //adds each element to total
    }
    cout << "Sum = " << total << "\n"; // prints the finam sum
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5,};  // declares an array of  5 integers
    sumArray(numbers , 5);   // calls the function and passes the array and size of 5 
    return 0; 
}