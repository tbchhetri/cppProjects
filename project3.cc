#include"iostream"
#include"code.h"
#include"cstdlib"

codec64 codec;

using namespace std;

bool isPrime(int64_t n){
  if ( n < 2 )
	return false;
  if ( n == 2 )
	return true;
  if ( n % 2 == 0 )
	return false;
  for ( f = 3; f*f <= n; f +=2)
	if (n%f == 0)
		return false;
	return true;
  )

void keyGen(){
	do{
	    p = rand() % 61440 + 4096;
	  }
	while (!isPrime(p));
}

int gcd(a,b) {
  if (a < 0 )
	a = -a;
  if (b < 0 )
	b = -b;
  while( b != 0)
	{
	r = a % b;
	a = b;
	b = r;
	}
  return a;
}



















