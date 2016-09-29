#include <iostream>

using namespace std;


int main(){
	int x = 2;
	int y = 3;

	int z = y;
	y = x;
	x = z;

	cout << x << " " << y;

	return 0;
}

