// CO_COvendingMacchineApp.cpp
// A vending machine simulation using C++ with OOP principles
// Author: Caleb Oppong
// Date: 05/08/2025
// Description: Vending machine with Products and options

#include <iostream> //this is the stream library for input and output console.
#include <string>   // It's a string library mostly used for string operations.
using namespace std; // It permits us to use C++ features like cout and etc.

#include <iomanip>      // for formatting output (e.g., fixed precision)
#include <map>          // for mapping item codes to item objects

// This will be the macchine struct to define each item
struct Item {
    string name;        // the name of the item
    string category;    // the category of the item
    double price;       // the price of the item
    int stock;          // availability of the item in the macchine
}; // <<<--- This closing brace was missing

// Class to manage the vending machine
class COvendingMacchine {
private:
    map<int, Item> items;      // direction to store items with a unique integer code
    double COuserBalance;      // memorize the user's current inserted money

public:
    // Constructor to initialize items and balance
    COvendingMacchine() {
        COuserBalance = 0.0;

        // Populate vending machine with items and their respective codes
        items[101] = {"Mirinda", "Drink", 1.80, 10};
        items[102] = {"Water", "Drink", 1.20, 8};
        items[103] = {"Snickers", "Snack", 1.20, 6};
        items[104] = {"Biscuits", "Snack", 1.50, 4};
        items[105] = {"Sprit", "Drink", 1.80, 10};
        items[106] = {"Fanta", "Drink", 1.80, 12};
    }

    // it displays all available items in the vending machine
    void COdisplayMenu() {
        cout << "===== C.O. VENDING MACHINE MENU =====\n";
        for (const auto& pair : items) {
            const Item& item = pair.second;
            if (item.stock > 0) { // it only display items that are in stock
                cout << "Code: " << pair.first
                     << " | " << setw(10) << item.name
                     << " | Category: " << setw(10) << item.category
                     << " | Price: £" << fixed << setprecision(2) << item.price
                     << " | Stock: " << item.stock << endl;
            }
        }
        cout << "=================================\n";
    }

    // Allows user to insert money into the vending machine
    void COinsertMoney() {
        double amount;
        cout << "Insert money (£): ";
        cin >> amount;

        // Check for valid input
        if (amount > 0) {
            COuserBalance += amount; // Add to the balance
            cout << "Balance: £" << fixed << setprecision(2) << COuserBalance << endl;
        } else {
            cout << "Invalid amount.\n"; // Reject negative or zero input
        }
    }

    // Handles item purchase logic
    void COpurchaseItem() {
        int code;
        cout << "Enter item code to purchase: ";
        cin >> code;

        // Check if code exists in the item list
        if (items.find(code) != items.end()) {
            Item& item = items[code]; // Get item by reference

            // Check if the item is in stock
            if (item.stock <= 0) {
                cout << "Sorry, " << item.name << " is out of stock.\n";
                return;
            }

            // Check if the user has inserted enough money
            if (COuserBalance >= item.price) {
                COuserBalance -= item.price; // Deduct price from balance
                item.stock--;              // Decrease stock
                cout << "Dispensing: " << item.name << "...\n";
                cout << "Remaining balance: £" << fixed << setprecision(2) << COuserBalance << endl;

                // Suggest a related item from a different category
                COsuggestItem(item.category);
            } else {
                cout << "Insufficient funds. Please insert more money.\n";
            }
        } else {
            cout << "Invalid item code.\n"; // WHEN THE code not found
        }
    }

    // this encourages the user to make more purchases
    void COsuggestItem(string category) {
        for (const auto& pair : items) {
            const Item& item = pair.second;

            // Suggest only if it's in a different category and in stock
            if (item.category != category && item.stock > 0) {
                cout << "Would you like to try a " << item.name << "? (Code: " << pair.first << ") only £" << item.price << "\n";
                break; // Suggest only one item
            }
        }
    }

    // this gives the remaining balance to the user
    void COreturnChange() {
        cout << "Returning change: £" << fixed << setprecision(2) << COuserBalance << "\n";
        COuserBalance = 0.0; // Reset balance
    }
};

// the main funtion of the program logic
int main() {
    COvendingMacchine vm;  // Create a vending machine object
    int choice;         // To capture user menu selection
    bool running = true;

    cout << "Welcome to the Smart C.O. Vending Machine!\n";

    // Main interaction loop
    while (running) {
        cout << "\n1. View Menu\n2. Insert Money\n3. Buy Item\n4. Exit\nChoose option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                vm.COdisplayMenu();     // Show items
                break;
            case 2:
                vm.COinsertMoney();     // Add money
                break;
            case 3:
                vm.COpurchaseItem();    // Try to buy an item
                break;
            case 4:
                vm.COreturnChange();    // Return any balance
                running = false;        // Exit program
                break;
            default:
                cout << "Invalid choice. Please try again.\n"; // this will handle invalid input
        }
    }

    cout << "Thank you for using the C.O. vending machine.\n";
    return 0;
}