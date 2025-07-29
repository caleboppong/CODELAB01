#include <iostream> //this is the stream library for input and output console.
#include <string>   // It's a string library mostly used for string operations.
using namespace std;// It permits us to use C++ features like cout and etc.

// this is a function that checks if a number is even or odd and takes an integer as input and returns a message as a string
std::string calebisEven(int number) {
    
    if (number % 2 == 0) { // If the number modulo 2 is 0, it's even
        return "The number given is even";
    } else {
        return "The number given is odd";
    }
}

int main() {
    int userInput;  // the variable will store user input

    std::cout << "Enter an integer number: "; // this asks the user to enter a number
    std::cin >> userInput;

    // Check if the input failed (e.g., user entered a non-integer)
    if (std::cin.fail()) {
        std::cout << "Invalid input! Please enter a valid integer number." << std::endl;
    } else {
        std::string result = calebisEven(userInput);  // this calls the function to determine if the number is even or odd
        std::cout << result << std::endl; // this will output the result message returned by the function
    }

    return 0;  // this will indicate that the program has successfully ended.
}
