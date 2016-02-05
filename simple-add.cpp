/*
Simple addition program
Licensed under GNU General Public License 3.0
*/

#include <iostream>
using namespace std;

int main()
{
  int a, b, c; //Initialize integers a, b and c
  cout << "Enter two numbers to add:\n"; //Asks user to input 2 numbers
  cin >> a >> b; //Sets a, b to what the user enters

  c = a + b; //Adds a and b and sets c to answer
  cout << "Sum of entered numbers = " << c << endl; //Prints the answer

  return 0;

}
