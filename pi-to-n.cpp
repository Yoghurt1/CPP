/*
Generate Pi to the nth digit
Licensed under GNU General Public License 3.0

cinCheck() function taken from simple-calculator.cpp, see at github.com/yoghurt1/cpp

Changelog
  V1.0 - Original program
  V2.0 - Fixed issue where setprecision() was ignoring the first two characters, added validation
*/

#include <iostream>
#include <stdio.h> //For printf
#include <limits> //For numeric_limits

using namespace std;

int cinCheck() //Function for checking cin for nth
{
  if ( !cin ) { //If cin is invalid
    cin.clear(); //Clear failbit
    cin.ignore(); //Clear stream
  }

  return 0; //End cinCheck()
}

int main()
{

  int nth; //Initialize nth variable to store nth digit
  cout << "Please enter a number to generate Pi to (Up to 100): "; //Print greeting
  cin >> nth; //Get how many digits of Pi the user wants
  cinCheck(); //Run cinCheck function


  while ( nth > 100 || nth <= 0) { //While nth is greater than 100 or less than or equal to 0
    cout << "That input was invalid. Please enter a number between 1 and 100.\n"; //Print error
    cin >> nth; //Get nth value again
  }

  cout << "Here is Pi to " << nth << " digit(s): ";
  printf ("%.*s\n", nth + 2, "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679"); //Print Pi to user-defined amount of digits

  return 0;

}
