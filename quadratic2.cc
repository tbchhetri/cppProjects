#include <iostream>
#include <cmath>

using namespace std;

int main () {
  double
	a,b,c,	//coefficients of quadratic equation
	d,	//discriminant
	re,im,  //real and imaginary part
	x1,x2   //roots of the quadratic equation

//step 1: get a,b,c
  cout << "Enter values for a, b and c (space-separated): ";
  cin >> a >> b >> c;

//step 2: calculate d
  d = b*b - 4*a*c;

//step 3: iff to determine scenario
  /*if (a == 0 && b == 0){
	//error
  } else if (a == 0 && b != 0) {
	//linear*/
  if (a == 0){
	if (b == 0) {
	//error
      } else {
	//linear
  } else if (d < 0) {
	//complex
	re = -b / (2 * a);
	im = sqrt(-d) / (2 * a);
	cout << "Root are " << re << "+" << im << "j and "
	     << re << "-" << im << "j" << endl;
 
  } else if (d == 0) {
	//repeated roots
  } else {
	//two distinct roots
  }
//step 4: all done

return 0;
}
