#include <iostream>
#include <conio.h>
#include <map>

/**********************************
*
* Example: MAP usage
*
* Author: Ram Sever
*
***********************************/

using namespace std;

void main(int argc, char *argv[]){

	map<char,int> my_map;

	my_map['a'] = 1;
	my_map['b'] = 2;
	my_map['c'] = 3;

	cout << "my_map['a']=" << my_map['a'] << "\n";
	cout << "my_map['b']=" << my_map['b'] << "\n";
	cout << "my_map['c']=" << my_map['c'] << "\n";

	cout << "Press any key to exist\n";
	_getch();

}


