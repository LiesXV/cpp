#include <iostream>
#include "../includes/Fixed.hpp"

;
;

int main( void ) {

	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "Tests from subject" << std::endl;
	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	b++;
	std::cout << b << std::endl;
	b++;
	std::cout << b << std::endl;
	b++;

	Fixed	c(42);
	Fixed	d(24);
	
	std::cout << std::endl <<"My own tests" << std::endl;
	std::cout << std::endl;

	std::cout << "c : " << c << " d : " << d << std::endl << std::endl;
	
	if (c > d) {std::cout << "c > d  : true" << std::endl;}
	else {std::cout << "c > d  : false" << std::endl;}
	
	if (c < d) {std::cout << "c < d  : true" << std::endl;}
	else {std::cout << "c < d  : false" << std::endl;}

	if (c >= d) {std::cout << "c >= d : true" << std::endl;}
	else {std::cout << "c >= d : false" << std::endl;}

	if (c <= d) {std::cout << "c <= d : true" << std::endl;}
	else {std::cout << "c <= d : false" << std::endl;}

	if (c == d) {std::cout << "c == d : true" << std::endl;}
	else {std::cout << "c == d : false" << std::endl;}

	if (c != d) {std::cout << "c != d : true" << std::endl << std::endl;}
	else {std::cout << "c != d : false" << std::endl << std::endl;}
	
	std::cout << "c + d = " << (c + d) << std::endl;
	std::cout << "c - d = " << (c - d) << std::endl;
	std::cout << "c * d = " << (c * d) << std::endl;
	std::cout << "c / d = " << (c / d) << std::endl << std::endl;
}
