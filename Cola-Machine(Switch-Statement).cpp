/*Cola Machine
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

★ If you program uses if statements instead of a switch statement, modify it to use a switch statement.
If instead your program uses a switch statement, modify it to use if/else-if statements.

★★ Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."*/
#include <iostream>
using namespace std;

int main() {
  int choice;
  choice=0;
  cout << "Choose the beverage of your choice:" << endl;
  cout << "[Coke] [Pepsi] [Water] [Sprite] [Fanta]" << endl;
  cout << "  1      2        3       4        5" << endl;
  cin >> choice;
  switch(choice) {
    case 1:
      cout << "Enjoy your drink!";
      break;
    case 2:
      cout << "Enjoy your drink!";
      break;
    case 3:
      cout << "Enjoy your drink!";
      break;
    case 4:
      cout << "Enjoy your drink!";
      break;
    case 5:
      cout << "Enjoy your drink!";
      break;
    default:
      cout << "Error. choice was not valid, here is your money back.";
  }
  return 0;
}
