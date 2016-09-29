#include <iostream>

using namespace std;

void printHelp(){
	cout << "Копирование файлов и структур каталогов." <<endl;
	cout << endl;
	cout << "XCOPY источник [целевой_объект] [/A | /M] [/D[:дата]] [/P] [/S [/E]] [/V] [/W]" << endl;
	cout << "                           [/C] [/I] [/Q] [/F] [/L] [/G] [/H] [/R] [/T] [/U]" << endl;
	cout << "                           [/K] [/N] [/O] [/X] [/Y] [/-Y] [/Z] [/B]" << endl;
	cout << "                           [/EXCLUDE:файл1[+файл2][+файл3]...]" << endl;

}

int main(int cnt, char ** args){

	if(cnt > 1 && args[1][0] == 'h'){
        	printHelp();
        }

	return 0;
}