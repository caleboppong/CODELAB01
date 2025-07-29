#include <iostream> //this is the stream library for input and output console.
#include <string>   // It's a string library mostly used for string operations.
using namespace std;// It permits us to use C++ features like cout and etc.

// This function is called switch and it maps a month number (1-12) to its corresponding nameand returns "Unknown" for invalid inputs.

string calebgetMonthName(int month) {
    switch (month) {
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
        default: return "Unknown"; // default handles any month number outside the valid range.
    }
}

int main() { // Entry point of the program.
    int month; // Variable to store user's month input.

    // Greeting and prompt to the user.
    cout << " Days in a Month Finder! " << endl;
    cout << "Enter the number of a month (1-12): ";
    cin >> month; // Takes user input for month number.

    cout << "\nChecking the calendar..." << endl; // Simulates processing feedback.

    // Switch-case logic to determine the number of days in the input month.
    switch (month) {
        // Months with 31 days.
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << calebgetMonthName(month) << " has 31 days. " << endl;
            break;

        // Months with 30 days.
        case 4: case 6: case 9: case 11:
            cout << calebgetMonthName(month) << " has 30 days. " << endl;
            break;

        // February – special case due to leap years.
        case 2:
            cout << "February has 28 days... or 29 in a leap year! 🌙" << endl;
            break;

        
        default:
            cout << "Invalid month number! Please enter a value between 1 and 12." << endl; // outputs error message for out-of-range input.
    }

    return 0; // return 0 ends the program.
}
