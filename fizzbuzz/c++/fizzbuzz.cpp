#include <iostream>

void fizzbuzz( int n ) {
	for( int i = 1; i <= n; ++i ) {
		std::string s = "";

		if( i % 3 == 0 ) {
			s += "Fizz";
		}

		if( i % 5  == 0 ) {
			s += "Buzz";
		}

		if( !s.empty() ) {
			std::cout << s << std::endl;
		} else {
			std::cout << i << std::endl;
		}
	}
}

int main( ) {
	fizzbuzz( 100 );
}
