#include <iostream>
using namespace std;

int main(){

    // Declare a variable to store user input
    int rows, columns; 

    // Ask user for number of rows
    cout << "Enter number of rows: ";
    cin >> rows;

    // Ask user for number of columns
    cout << "Enter number of column: ";
    cin >> columns;

    // Display the dimensions entered by the user
    cout << "\nYou entered\n" << rows << " rows and " << columns << " columns\n\n";

    // Declare a 2d array with a maximum size of 50x50
    int arrays[50][50];

    //Prompt user to enter numbers for the matrix
    cout << "Enter the numbers for the matrix\n";
    for(int i = 0; i < rows; i++){              // Loops through each row
        for(int j = 0; j < columns; j++){       // Loops through each column in the current row
            // Ask user for the value postion 
            cout << "Enter value for row"
            << i + 1 << " column "  /*i + 1 and j + 1 because rows and
             column starts at 0 indexing*/
            << j + 1 << ": ";           
            cin >> arrays[i][j];    // Store user input
        }
    }

    // Display the matrix
    cout << "\nMatrix Output:\n";
    for(int i = 0; i < rows; i++){  // Loop through each row
        cout << "[ ";                          // Start with a bracket
        for(int j = 0; j < columns; j++){      // Loop through each column
            cout << arrays[i][j] << " ";       // Print value with space
        }
        cout << "]" << endl;                   // End with a bracket
    }   

    return 0;

}