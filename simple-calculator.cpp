/*
Simple calculator program
Licensed under GNU General Public License 3.0
*/

#include <iostream>
using namespace std;

int main()
{
  int number1, number2, answer; //Initialize integers number1 and number2
  std::string function; //Initialize string operator
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
  cout << "Answer to entered equation = " << answer << endl; //Prints the answer

  return 0;

}


