/*
Generate Pi to the nth digit
Licensed under GNU General Public License 3.0

Changelog
  V1.0 - Created, 20/4/2016
*/

#include <iostream>
#include <iomanip> //For setprecision
using namespace std;

int main()
{

  int nth; //Initialize nth variable to store nth digit
  double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679; //Initialise pi variable to 100 digits of Pi
  cout << "Welcome to the Generate Pi to the nth digit program!\nPlease enter a number to generate Pi to (Up to 100): "; //Print greeting
  cin >> nth; //Get how many digits of Pi the user wants
  cout << setprecision(nth) << pi << "\n"; //Print Pi to user-defined amount of digits

  return 0;

}
