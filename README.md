Features:
Users can input multiple names.
The program sorts names in alphabetical order.
Provides a menu-driven interface for user interaction.
Prevents sorting if no names have been entered.
Uses C++ Standard Library functions for sorting and input handling.

How It Works:
The user selects an option from the menu:
Option 1: Enter names one by one.
Option 2: View the list of names sorted in alphabetical order.
Option 3: Exit the program.
If names are entered, they are stored in a vector<string>.
The program sorts the names using sort() from the <algorithm> library.
The sorted names are displayed when the user selects Option 2.
The program will prompt the user until they choose to exit.
