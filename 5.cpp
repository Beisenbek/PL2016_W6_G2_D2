#include <iostream>

using namespace std;

void printHelp(){
	cout << "����������� ������ � �������� ���������." <<endl;
	cout << endl;
	cout << "XCOPY �������� [�������_������] [/A | /M] [/D[:����]] [/P] [/S [/E]] [/V] [/W]" << endl;
	cout << "                           [/C] [/I] [/Q] [/F] [/L] [/G] [/H] [/R] [/T] [/U]" << endl;
	cout << "                           [/K] [/N] [/O] [/X] [/Y] [/-Y] [/Z] [/B]" << endl;
	cout << "                           [/EXCLUDE:����1[+����2][+����3]...]" << endl;

}

int main(int cnt, char ** args){

	if(cnt > 1 && args[1][0] == 'h'){
        	printHelp();
        }

	return 0;
}