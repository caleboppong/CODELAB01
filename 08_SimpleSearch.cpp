#include <iostream> //this is the stream library for input and output console.
#include <string>   // It's a string library mostly used for string operations.
using namespace std;// It permits us to use C++ features like cout and etc.

// Function to perform a simple search on the array
bool calebsimpleSearch(const std::string arr[], int size, const std::string& target) {
    for (int i = 0; i < size; ++i) {
        
        if (arr[i] == target) { // Check if current array element matches the target
            return true; // Found the target
        }
    }
    return false; // Target not found in the array
}

int main() { //it's the main function.

    // it starts the array of names
    const std::string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    const int size = sizeof(names) / sizeof(names[0]);

    // Ask the user if they want to enter their own search term
    std::cout << "Do you wish to search for a name? (y/n): ";
    char choice;
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        std::string searchTerm; // Declare the search term variable

        std::cout << "Enter the name to search for: ";
        std::cin >> searchTerm;
    
        // Use the search function to check if the term is in the array
        if (calebsimpleSearch(names, size, searchTerm)) {
            std::cout << searchTerm << " Found!" << std::endl;
        } else {
            std::cout << searchTerm << " not found." << std::endl;
        }
    }

    return 0; // Program ends.
}
