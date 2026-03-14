#include <iostream>
using namespace std;

int sum(int x){    // int to return a number 
    if(x > 0){     // if x is greater than 0 keep going 
        return x + sum(x-1); // add x to the result of x - 1
    }else{
        return 0;    // 0 neutral value of addition
    }
}

 int main(){
       cout << sum(10);  // prints the result
       return 0;
    }