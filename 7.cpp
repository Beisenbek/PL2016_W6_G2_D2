/*
T f_name(T1 a, T2 b, ...){  
    T res;

    ...

    return res;
}
*/
#include <iostream>

using namespace std;


int sqr(int a){
 return a * a;
}

int myquickpow(int a,int n){

	if(n == 0) return 1;
	if(n == 1) return a;

	if(n%2 == 1) return a*sqr(myquickpow(a,(n-1)/2));
	if(n%2 == 0) return sqr(myquickpow(a,n/2));
}

int main(){

	int a,l;
	cin >> a >> l;

	int x = myquickpow(a,l);

	cout <<x;

	return 0;
}