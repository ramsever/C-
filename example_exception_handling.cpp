#include <iostream>
#include <string>
#include <conio.h>

/**********************************
*
* Example: TRY CATCH usage
*
* Author: Ram Sever
*
***********************************/

using namespace std;

void main(int argc, char* argv[]){

	char inputString[100];
	double x;

	cout << "please enter a number \n";
	cin >> inputString;

	try{
		x = stoi(inputString);
	} catch(exception& e) {
		cout << "can not convert input to double "<< e.what() << " \n";
	}

	cout << inputString << "\n";

	cout << "Press any key to exist\n";
	_getch();


}