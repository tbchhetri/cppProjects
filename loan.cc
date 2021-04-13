#include <iostream>
#include <cmath>
#include <iomanip>	// Used for sigfig

using namespace std;

int main () {
  // step 0: variables
  int 
  n;	//number of payments
  double
  r,	//interest rate
  apr,	//annual interest rate
  pv,	//principal rate
  pmt;	//payment per period

  // step 1: inpput values for pv, r and n
  cout << "Enter amount of loan (dollars): ";
  cin >> pv;

  cout << "Enter the annual interest rate (3.75% = 0.0375): ";
  cin >> apr;

  cout << "Enter number of payments (months): ";
  cin >> n;

  // step 1.5: convert apt to mpr
  r = apr/12;

  // step 2: calculate
  pmt = r * pv / (1.0 - pow(1.0+r,-n));

  //step 3: output payment amount
  cout << fixed << setprecision(2);
  cout << "Payment is $" <<pmt<< endl;
  // all done!

return 0;
}
