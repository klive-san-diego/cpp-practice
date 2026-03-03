#include <iostream>
using namespace std;

int main(){

    string hasAccount, username, password, inputUser, inputPassword;    // Variables for Sign up log in
    int attemptLimit = 3;   // Tried giving a limit to user if they keep getting wrong username
    int attempts = 0;       // Counter 
    
    cout << "Do you have an account? (yes/no): ";
    getline(cin, hasAccount);   

    // Sign up if user says no
    if(hasAccount == "no"){
        
        cout << "\n=== SIGN UP ===\n";

        //Looping it until user did not type anything
        do{
            cout << "Create Username: ";
            getline(cin, username);

            cout << "Create Password: ";
            getline(cin, password);


            if(username == "" || password == ""){
                cout << "You didn't type a Username or password. Try again\n";
            }
        }while(username == "" || password == "");
        cout << "Sign Up Successful!!\n\n";
    }

    //Login part
    cout <<"\n=== LOG IN ===\n";

    //Loop for username attempt limit
    attempts = 0;
    while(true){
        cout << "Enter Username: ";
        cin >> inputUser;

        if(inputUser == username){
            break;
        }else{
            attempts++;
            cout << "Incorrect Username. Try again.\n";

            if(attempts >= attemptLimit){
                cout << "You dont have an account. Please sign up.\n";

                // Sign up loop
                do{
                    cout << "Create Username: ";
                    getline(cin, inputUser);

                    cout << "Create Password: ";
                    getline(cin, inputPassword);

                    if(username == "" || password == ""){
                        cout << "You didn't type a Username or password. Try again\n";
                    }
                }while(username == "" || password == "");
                 cout << "Sign Up Successful!!\n\n";
                 attempts = 0; 
            }
        }
    }

    //Loop in password until correct input
    do{
        cout << "Enter Password: ";
        getline(cin, inputPassword);

        if(inputPassword != password){
            cout << "Incorrect Password. Try again.\n";
        }
    }while(inputPassword != password);
   
    cout << "Login Successful! Welcome!" << " " << inputUser;
    return 0;

}
   
