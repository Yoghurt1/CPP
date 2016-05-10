/*
Generate Pi to the nth digit
Licensed under GNU General Public License 3.0
www.github.com/Yoghurt1/CPP

cinCheck() function taken from simple-calculator.cpp, see at github.com/yoghurt1/cpp

Changelog
  V1.0 - Original program
  V2.0 - Fixed issue where setprecision() was ignoring the first two characters, added validation
  V3.0 - Added e generation
  V3.1 - Added comments
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
  string piOre; //Initialize piOre variable to store whether the user wants to store Pi or e
  cout << "Welcome to the Pi/e generator!\nDo you want to generate Pi or e? Please enter Pi or e: "; //Print greeting
  cin >> piOre; //Get whether the user wants to generate Pi or e

  while ( piOre != "Pi" || piOre != "pi" || piOre != "e" || piOre != "E" ) { //If the user has asked for something other than Pi or e
    cout << "That input is invalid. Please enter either Pi or e. "; //Print error
    cin >> piOre; //Get piOre value again
    cinCheck(); //Run cinCheck()
  }

  cout << "How many digits of " << piOre << "do you want to generate? (Up to 100)";
  cin >> nth; //Get how many digits of Pi the user wants
  cinCheck(); //Run cinCheck function

  while ( nth > 100 || nth <= 0 ) { //While nth is greater than 100 or less than or equal to 0
    cout << "That input was invalid. Please enter a number between 1 and 100.\n"; //Print error
    cin >> nth; //Get nth value again
    cinCheck(); //Run cinCheck()
  }

  if ( piOre == "Pi" || piOre == "pi" ) { //If user chose pi
    cout << "Here is Pi to " << nth << " digit(s): "; //Output intro
    printf ("%.*s\n", nth + 2, "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679"); //Print Pi to user-defined amount of digits
  }
  else if ( piOre == "e" || piOre == "E" ) { //If user chose e
    cout << "Here is e to " << nth << " digit(s): "; //Output intro
    printf ("%.*s\n", nth + 2, "2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274"); //Print e to user-defined amount of digits
  }


  return 0;

}
