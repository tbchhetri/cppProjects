#include <istream>

using namespace std;

int () {
  

  //step 1: make a and b non negative
    if (a < 0)
      a = -a;
    if (b < 0)
      b =-b;

  //step 2: loop until b ==0
    while  (b!=0){
  //divide a by b, take the remaining
      r = a % b;

  //move b into a, then move r 
    a = b;
    b = r;
    }

  //all done, a is gcd
  cout << "GCD is " << a << endl;

  return 0;
 }
