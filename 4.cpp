/*
void f_name(T1 a, T2 b, ...){  
	...
}
*/
#include <iostream>

using namespace std;

void f(int a, string message){
	
	for(int i = 1;i<=a; ++i){
		cout << message << endl;
	}
}


int main(){

	f(3,"hello");

	return 0;
}

