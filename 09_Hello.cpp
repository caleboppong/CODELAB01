#include <iostream> //this is the stream library for input and output console.
#include <string>   // It's a string library mostly used for string operations.
using namespace std;// It permits us to use C++ features like cout and etc.

// this is a function to print a greeting message
void hello() { //void  doesn't return any value
    cout << "Hello" << endl;
}

int main() { // this is the main funtion
    hello(); // Call the hello function to print "Hello" to the console

    return 0; // end of program.
}
