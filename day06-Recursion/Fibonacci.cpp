#include <iostream>
using namespace std;

// Return nth fibonacci number
int fibonacci(int x){  // int to return a number and x is the number we want
    
    if(x == 0) {   // stop when x is 0
        return 0;  // fibonacci(o) is always 0
    }else if(x==1){ // stops when x is 1 
        return 1;   // fibonacci(1) is always 1
    }else{
        return fibonacci(x - 1) + fibonacci(x - 2);  // add two number before x
    }
}

int main(){
    cout << fibonacci(6);  // prints the result of the fibonacci
    return 0; 
}