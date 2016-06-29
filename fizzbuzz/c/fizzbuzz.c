#include <stdio.h>
#include <string.h>

void fizzbuzz( int n ) {
	for( int i = 1; i <= n; ++i ) {
		char s[9];
		s[0] = '\0';

		if( i % 3 == 0 ) {
			strcat( s, "Fizz" );
		}

		if( i % 5 == 0 ) {
			strcat( s, "Buzz" );
		}

		if( s[0] == '\0' ) {
			sprintf( s, "%d", i );
		}

		puts( s );
	}
}

int main() {
	fizzbuzz( 100 );
}
