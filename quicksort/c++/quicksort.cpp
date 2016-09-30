#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

template<typename T>
T quicksort( T arr ) {
	if( arr.size() <= 1 ) {
		return arr;
	}

	T equal;
	T lesser;
	T greater;

	auto pivot = arr[ arr.size() / 2 ];

	for( auto && e : arr ) {
		if( e < pivot ) {
			lesser.push_back( e );
		} else if( e > pivot ) {
			greater.push_back( e );
		} else {
			equal.push_back( e );
		}
	}

	if( !greater.empty() ) {
		greater = quicksort( greater );
	}

	if( !lesser.empty() ) {
		lesser = quicksort( lesser );
	}

	T result;
	result.reserve( arr.size() );
	result.insert( result.end(), lesser.begin(), lesser.end() );
	result.insert( result.end(), equal.begin(), equal.end() );
	result.insert( result.end(), greater.begin(), greater.end() );

	return result;
}

int main() {
	vector<int> arr = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 11, 3, 0 };
	auto result = quicksort( arr );
	for( auto && e : result ) {
		cout << e << ", ";
	}
	cout << endl;
}
