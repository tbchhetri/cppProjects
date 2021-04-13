#include <iostream>

using namespace std;

int main() {

// variables
double 
	p1x, p1y, p2x, p2y,	// endpoint of segment P
	q1x, q1y, q2x, q2y,	// endpoint of segment Q
	rx, ry,			// vector from p1 to p2
	sx, sy,			// vectors from q1 to q2
	vx, vy,			// vectors from q1 to p1
	d,			// cross product of r and s, tells if parallel
	t, u,			// intersection point location along p and q
	ipx, ipy;		// intersection point


//Input coordinates of p1 and p2
cout << "Enter coordinates of point p1: ";
cin >> p1x >> p1y;

cout << "Enter coordinates of point p2: ";
cin >> p2x >> p2y;

// Input coordinates of q1 and q2
cout << "Enter coordinates of point q1: ";
cin >> q1x >> q1y;

cout << "Enter coordinates of point q2: ";
cin >> q2x >> q2y;

// r = p2 - p1 Distance from p1 to p2
rx = p2x - p1x;
ry = p2y - p1y;

cout << "r = (" << rx << "," << ry << ") " << endl;

// s = q2 - q1 Distance from q1 to q2
sx = q2x - p1x;
sy = q2y - p1y;

cout << "s = (" << sx << "," << sy << ") " <<  endl;

// v = q1 -p1
vx = q1x - p1x;
vy = q1y - p1y;

cout << "v = (" << vx << "," << vy << ") " << endl;

// d = r*s
d = rx * sy - ry * sx;

cout << "d = (" << d << ") "<< endl;

// if d = 0 then
if d == 0 { 
  
  // if v * s = 0 then

    // segments are parallel

  // else

    // segments are parallel

 // end if

// else

   // if v * s = 0 then
   
 // t = v x s / d, Intersection point along P in units of r

// u = v x r /d, intersection point along Q in units of s

// if 0 <= t <= 1 and 0 <= u <= 1 then

 //segment intersection at p1 + t * r = q1 + u * s

// else

  // Segment not parallel but do not intersect

// end if

return 0;
}

