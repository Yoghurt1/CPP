/*
Generate the prime factors of a given number
Licensed under GNU General Public License 3.0
www.github.com/Yoghurt1/CPP

Changelog
  V1.0 - Original program
*/

#include <iostream>

using namespace std;

int main()
{
  int usrNo; //Initialise variable to store user input
  int i; //Counter i

  cout << "Please enter the number that you want to find the prime factors of: ";
  cin >> usrNo;

  for(i = 2; i <= usrNo; i++) {
    while(usrNo % i == 0) {
      usrNo = usrNo / i;
      cout << "\n" << i;
    }
  }
}
