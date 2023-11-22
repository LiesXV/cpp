#include <iostream>
#include "../includes/Fixed.hpp"

using std::cout;
using std::endl;

int main( void ) {

	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	cout << "Tests from subject" << endl;
	cout << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << b << endl;
	cout << Fixed::max( a, b ) << endl;
	cout << Fixed::min( a, b ) << endl;

	b++;
	cout << b << endl;
	b++;
	cout << b << endl;
	b++;

	Fixed	c(42);
	Fixed	d(24);
	
	cout << endl <<"My own tests" << endl;
	cout << endl;

	cout << "c : " << c << " d : " << d << endl << endl;
	
	if (c > d) {cout << "c > d  : true" << endl;}
	else {cout << "c > d  : false" << endl;}
	
	if (c < d) {cout << "c < d  : true" << endl;}
	else {cout << "c < d  : false" << endl;}

	if (c >= d) {cout << "c >= d : true" << endl;}
	else {cout << "c >= d : false" << endl;}

	if (c <= d) {cout << "c <= d : true" << endl;}
	else {cout << "c <= d : false" << endl;}

	if (c == d) {cout << "c == d : true" << endl;}
	else {cout << "c == d : false" << endl;}

	if (c != d) {cout << "c != d : true" << endl << endl;}
	else {cout << "c != d : false" << endl << endl;}
	
	cout << "c + d = " << (c + d) << endl;
	cout << "c - d = " << (c - d) << endl;
	cout << "c * d = " << (c * d) << endl;
	cout << "c / d = " << (c / d) << endl << endl;
}
