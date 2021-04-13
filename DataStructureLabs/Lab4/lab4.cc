#include <iostream>
using namespace std;

void showBits(unsigned int n) {
  for (int i = 31; i >= 0; i--)
	if (n & (1 << i))
	  cout << "1";
	else
	  cout <<"0";

	cout << endl;
}

int countBits(unsigned int n){
  int count = 0;
  while (n != 0){
	count++;
	n &= n - 1;
	}
  return count;
}

int main (void){
  unsigned int a, b, c, d;

  cout << " Enter 2 nonnegative integers: ";
  cin >> a >> b;

  cout << " number of bits in " << a << " is: " << endl;
  cout << countBits(a) << endl;

  cout << " Bit Shifting to the right " << endl;
  c = (a>>b);
  showBits(c);

  cout << " Bit Shifting to the left " << endl;
  c = (a<<b);
  showBits(c);

  cout << " Bits when And'ed " << endl;
  c = a & b;
  showBits(c);

   cout << " Bits when Or'ed " << endl;
  c = a | b;
  showBits(c);

 cout << " Bits when ~a " << endl;
  c = ~a;
  showBits(c);

 cout << " Bits when ~b " << endl;
  c = ~b;
  showBits(c);

 cout << " Bits when ^'ed " << endl;
  c = a ^ b;
  showBits(c);
return 0;
}
