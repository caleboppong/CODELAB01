#include <iostream> //this is the stream library for input and output console.
#include <string>   // It's a string library mostly used for string operations.
#include <thread>   // for sleep
#include <chrono>   // for delay
using namespace std;// It permits us to use C++ features like cout and etc.

int main() {
    const string calebcorrectPassword = "12345"; // This string is the actual password
    string userInput;                       // Stores user's input
    int maxAttempts = 5;                    // the number of times password is input if incorrect.
    int attempts = 0;                       // Counter for attempts

    cout << "=== BRUTE FORCE ATTACK SIMULATION ===" << endl;
    
    // This loop continues until the password is correct or max attempts are reached
    while (attempts < maxAttempts) {
        cout << "\nAttempt #" << (attempts + 1) << " - Enter password: ";
        cin >> userInput;

        if (userInput == calebcorrectPassword) {
            // Password matched
            cout << "\nAccess Granted: Welcome to the Secure Area!" << endl;
            break; // break exits loop on success
        } else {
            // Password incorrect
            attempts++; // Increment attempt count
            int remaining = maxAttempts - attempts;

            // Inform the user how many attempts are left
            if (remaining > 0) {
                cout << "Access Denied: Incorrect password." << endl;
                cout << "You have " << remaining << " attempt(s) remaining.";
                // Optional: simulate delay to create suspense
                this_thread::sleep_for(chrono::seconds(1));
            } else {
                // All attempts used
                cout << "\nMaximum attempts reached!" << endl;
                cout << "You have been reported to the authorities!" << endl;
            }
        }
    }

    cout << "\n=== Simulation Terminated ===" << endl;
    return 0;
}
