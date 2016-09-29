#include <iostream>

using namespace std;

void my_swap(int &a, int &b){
        int c = a;
	a = b;
	b = c;
}

int main(){
	int x = 2;
	int y = 3;

	my_swap(x,y);

	cout << x << " " << y;

	return 0;
}

