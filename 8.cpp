/*
T f_name(T1 a, T2 b, ...){  
    T res;

    ...

    return res;
}
*/
#include <iostream>

using namespace std;

int sum(int n){
	if(n == 1) return 1;
	return n + sum(n-1);
}

int main(){

	int n;
	cin >> n;

	int s = 0;

	for(int i = 1; i <= n; ++i){
	 	s = s + i;
	}

	cout << s;

	cout << endl;
	
	cout << sum(n); 


	return 0;
}