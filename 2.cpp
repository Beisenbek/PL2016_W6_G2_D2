/*
T f_name(T1 a, T2 b, ...){  
    T res;

    ...

    return res;
}
*/
#include <iostream>

using namespace std;


int mypow(int a,int n){
    int r = 1;

    for(int i = 1; i <=n;i = i + 1){
    	r = r * a;
    }

    return r;
}

int main(){

	int a,l;
	cin >> a >> l;

	int x = mypow(a,l);

	cout <<x;

	return 0;
}

