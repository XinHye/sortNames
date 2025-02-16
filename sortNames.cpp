/*Write a C++ program that 
reads a list of names from the user and then
sorts them in alphabetical order. 
Print the sorted list to the console.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main()
{
    vector<string> names;
    int option;
    
    do {
        cout << "Enter your option to proceed:\n";
        cout << "1. Input names\n";
        cout << "2. View list of sorted names\n";
        cout << "3. Exit\n";
        cout << "Your option: ";
        cin >> option;
        cin.ignore(); 
        system("CLS");

        switch(option) {
            
            //Prompt the user to input the number of names        
            case 1: 
                while (true) {
                    string name;
                    string status;
                       
                    cout << "Enter name: ";
                    getline(cin, name);
                        
                    names.push_back(name); 

                    // Keep asking until a valid 'y' or 'n' is entered
                    while (true) {
                        cout << "\nDo you want to enter another name? [y/n]: ";
                        getline(cin, status);
                        system("CLS");

                        if (status == "n" || status == "N") {
                            break; // Exit inner loop and stop adding names
                        } else if (status == "y" || status == "Y") {
                            break; // Exit inner loop and continue adding names
                        } else {
                            cout << "Invalid input! Please choose 'y' to continue or 'n' to stop.\n";
                        }
                    }
                
                
                    if (status == "n" || status == "N") {
                        break; // Exit inner loop and stop adding names
                    }
                }

                break;
            
            //Show list of name in sorted alphabetical order using sort() function
            case 2:
                //
                if (names.empty()) {
                    cout << "No names to sort. Please enter names first.\n";
                } else {
                    sort(names.begin(), names.end());
                    cout << "Sorted names:\n";
                    for (const auto& name : names) {
                        cout << name << endl;
                    }
                }
                cout << "\n";
                break;
            
            //Exit the program
            case 3:
                cout << "Exiting program.\n";
                return 0;
            
            //Invalid number
            default:
                cout << "Invalid option. Please try again.\n\n";
        }
    } while (true);

    return 0;
}
