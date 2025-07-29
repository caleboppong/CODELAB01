#include <iostream> //this is the stream library for input and output console.
#include <string>   // It's a string library mostly used for string operations.
using namespace std;// It permits us to use C++ features like cout and etc.

int main() { // The program execution starts from here and it's the main function.
    int coNum1 = 8; // the first variable data type is an interger (coNum1 is the named of the variable provided)
    int coNum2 = 10; // the second variable data type is an interger
    int coSum = coNum1 + coNum2; //this is also a third variable that is going to add the two previous variables and give us the total

    std::cout << "The total of " << coNum1 << " and " << coNum2 << " is " << coSum << "." << std::endl; //This will print the output wich has strings included

    return 0; //the program ends

}