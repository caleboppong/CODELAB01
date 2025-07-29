#include <iostream> //this is the stream library for input and output console.
#include <string>   // It's a string library mostly used for string operations.
using namespace std;// It permits us to use C++ features like cout and etc.

int main() { // The program execution starts from here and it's the main function.
    std::string coName;
    std::string coHometown;
    int coAge;


    //with this we are going to ask the user for inputs
    
    std::cout << "What is your full name: "; 
    std::getline (std::cin, coName); //this controls the full name with space
    
    std::cout << "Where is your Hometown? "; // this controls multi word hometown
    std::getline (std::cin, coHometown);

    std::cout << "How old are you: ";
    std::cin >> coAge;

    //the following will check the age input
    
    while (std::cin.fail()) {
        std::cin.clear(); // it will delete error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //it dispose invalid input
        std::cout <<"Input is invalid. Please tell us the number for your age: "; // it informs the user of an invalid input
        std::cin >> coAge;
    }

    //all the output each on a separate line in one cout
    std::cout << "Name: " << coName << "\nHometown: " << coHometown << "\nAge: " << coAge << std::endl;

    return 0; //end of the program
}
