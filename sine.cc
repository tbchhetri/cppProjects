#include <iostream> 
#include <cstdlib> 	//for atof ()
#include <iomanip>

using namespace std;

//calculating the cosine of an angle 

int main (int argc, char *argv[]) {	//argument value: Array of values
  double
    xOld, xNew,
    theta,
    term,
    factor;
    

  //step 0: make sure we have argc ==2
  if (argc != 2) {
    cout << "Usage : " << argv[0] << " number" << endl;
  return 1;
 }

  //step 1: get s from command line
  s = atof(argv [1]);

  //step 2: get initial value of xNew
  xNew = theta;
  xOld = xNew + 1;	//Just making it different from xNew

  term =theta;
  factor = 1;

 cout << setprecision (15);

  //step 3: Loop until last two values match
  while (xNew != xOld) {
	xOld = xNew;

	term = -term * theta * theta /(Factor + 1) / (factor +2);

	factor = factor + 2;

	xNew = (xOld + term);

	cout << xNew << endl;
        }
  //step 4: output
  cout << "Answer: " << xNew << endl;

  return 0;
}
