/*
Generate fibonacci sequence upto a given number
Licensed under GNU General Public License 3.0
www.github.com/Yoghurt1/CPP

Changelog
  V1.0 - Original program
*/

#include <iostream>

using namespace std;

int main()
{
   int usrNo; //Initialise usrNo variable as int for taking user input
   int fib1 = 0; //Initialise fib1-fib3 for storing numbers to use during calculations
   int fib2 = 1;
   int fib3 = 0;
   int i = 0; //Counter i

   cout << "How many numbers of the Fibonnaci Seqeunce do you want? "; //Ask user how many numbers of fibonacci they want
   cin >> usrNo; //User input for usrNo

   cout << "\n0";
   cout << "\n1";
   while(i != (usrNo - 2)){
     fib3 = fib2 + fib1;
     cout << "\n" << fib3;
     fib1 = fib2;
     fib2 = fib3;
     i++;
   }

   return 0;

}
