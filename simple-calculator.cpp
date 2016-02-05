/*
Simple calculator program
Licensed under GNU General Public License 3.0


Changelog
  V1.0 - Original program
  V2.0 - Added functionality for restarting the program if the user enters an invalid equation or if the user wants to enter another equation.
*/

#include <iostream>
using namespace std;

int number1, number2, answer, bork; //Initialize integers number1, number2, answer and bork
std::string function; //Initialize string for operator and restarting the program
std::string restart = "n"; //Set restart to "n"

int main()
{
  if (restart != "y") { //Ensures this only displays first time the program runs
    cout << "Welcome to Simple Calculator V1.1!\n";
  }

  cout << "Enter an equation:\n"; //Asks user to input 2 numbers
  cin >> number1 >> function >> number2; //Sets number1, operator and number2 to equation, use spaces my dood ;^)

  if ( function == "+" ) { //If-else statement for each operator
    answer = number1 + number2; //If add
  }
  else if ( function == "-" ) {
    answer = number1 - number2; //If subract
  }
  else if ( function == "x" ) {
    answer = number1 * number2; //If multiply
  }
  else if ( function == "/" ) {
    answer = number1 / number2; //If divide
  }
  else {
    bork = true;
  }
  if ( bork = true ) {
    cout << "Please enter a valid equation (+, -, x, /).\n";
    restart = "y";
    main();
  }
  cout << "Answer to entered equation = " << answer << endl; //Prints the answer

  return 0;

}
