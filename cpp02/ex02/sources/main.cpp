#include <iostream>
#include "../includes/Fixed.hpp"

using std::cout;
using std::endl;

int main( void ) {

	Fixed a;

	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	a = Fixed (50); 
	std::cout << a + b << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	return 0;
}
