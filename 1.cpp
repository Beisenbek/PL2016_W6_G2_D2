/*
T f_name(T1 a, T2 b, ...){  
    T res;

    ...

    return res;
}
*/
#include <iostream>

using namespace std;

int apb(int a, int b){
	int x = a + b;
	return x;
}


int main(){
	int x,y;

	cin >> x >> y;

	int u = apb(x,y);
	
	cout << u;

	return 0;
}

