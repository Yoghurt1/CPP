/*
Simple calculator program
Licensed under GNU General Public License 3.0
Credit to github.com/DanTheManRM for bork variable :^)

Changelog
  V1.0 - Original program
  V2.0 - Added functionality for restarting the program if the user enters an invalid equation or if the user wants to enter another equation.
  V3.0 - Added cinCheck() function to check if the input for number1 and number2 was int only.
*/

#include <iostream>
using namespace std;

std::string restart = "n"; //Set restart to "n"

int cinCheck() //Function for checking cin for number1 and number2
{
  if ( !cin ) { //If cin is invalid
    cin.clear(); //Clear failbit
  }

  return 0; //End cinCheck()
}

int main()
{
  int number1, number2, answer; //Initialize integers number1, number2, answer
  bool bork = false; //Initialize bork for if the program breaks
  std::string function; //Initialize string for operator and restarting the program

  if (restart != "y") { //Ensures this only displays first time the program runs
    cout << "Welcome to Simple Calculator V1.1!\n";
  }

  cout << "Enter an equation:\n"; //Asks user to input 2 numbers
  cin >> number1 >> function >> number2; //Sets number1, operator and number2 to equation, use spaces my dood ;^)
  cinCheck();

  if ( function == "+" ) { //If-else statement for each operator
    answer = number1 + number2; //If add
  }
  else if ( function == "-" ) {
    answer = number1 - number2; //If subract
  }
  else if ( function == "*" ) {
    answer = number1 * number2; //If multiply
  }
  else if ( function == "/" ) {
    answer = number1 / number2; //If divide
  }
  else {
    bork = true; //If invalid function input, set bork to true
  }

  if ( bork == true ) { //If bork is true
    cout << "Please enter a valid equation (+, -, x, /) or ensure you have used spaces in your equation (e.g. 1 + 1).\n"; //Ask user to put in a valid input
    restart = "y"; //Set the restart variable to "y" so the welcome message doesn't display again.
    main(); //Restart main() function
  }
  else { //If bork is false
    cout << "Answer to entered equation = " << answer << endl; //Prints the answer
  }

  return 0; //End main() function
}
