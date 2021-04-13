#include <iostream>
#include <cmath>

using namespace std;

int main() {

// step 0: declare variables
double 
	a,b,c,	// coefficients of quadratic equation
	x1,x2; // roots of equation

// step 1: get a, b and c
 cout << "Enter value for a coefficient: ";
 cin >> a;
// different direction for cin and cout
 cout << "Enter value for b coefficient: ";
 cin >> b;

 cout << "Enter value for c coefficient: ";
 cin >> c;

// step 2: calculate x1 = -b + sqrt(b^2 -4ac) / 2a
x1 = (-b + sqrt(b*b -4*a*c)) / (2*a);

// step 2b: calculate x2 = -b - sqrt(b^2 -4ac) /2a
x2 = (-b - sqrt(b*b -4*a*c)) / (2*a);

// step 3: display x1 and x2
cout << "x1 is " << x1 << " and x2 is " << x2 << endl;

// step 4: all done!
  return 0;

}

