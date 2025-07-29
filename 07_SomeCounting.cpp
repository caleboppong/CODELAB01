#include <iostream> //this is the stream library for input and output console.
#include <string>   // It's a string library mostly used for string operations.
using namespace std;// It permits us to use C++ features like cout and etc.


// this function is to print a separator for visual clarity
void calebprintSeparator(const string& title) {
    cout << "\n==== " << title << " ====\n";
}

int main() {            // The program execution starts from here and it's the main function having loops inside.

    // Loop 1: Count up from 0 to 50 (step of 1)
    calebprintSeparator("Counting Up from 0 to 50");
    for (int i = 0; i <= 50; ++i) {
        cout << i << " ";
    }
    cout << endl;// loop output

    // Loop 2: Count down from 50 to 0 (step of -1)
    calebprintSeparator("Counting Down from 50 to 0");
    for (int i = 50; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;// loop output

    // Loop 3: Count up from 30 to 50 (step of 1)
    calebprintSeparator("Counting Up from 30 to 50");
    for (int i = 30; i <= 50; i++) {
        cout << i << " "; // loop output
    }
    cout << endl;

    // Loop 4: Count down from 50 to 10 (step of -2)
    calebprintSeparator("Counting Down from 50 to 10 (by 2s)");
    for (int i = 50; i >= 10; i -= 2) {
        cout << i << " "; // negative loop output
    }
    cout << endl;

    // Loop 5: Count up from 100 to 200 (step of 5)
    calebprintSeparator("Counting Up from 100 to 200 (by 5s)");
    for (int i = 100; i <= 200; i += 5) {
        cout << i << " "; // positive loop output
    }
    cout << endl;

    return 0; //return 0 ends the program.
}
