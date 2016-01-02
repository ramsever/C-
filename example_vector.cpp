#include <vector>
#include <iostream>
#include <conio.h>

/**********************************
*
* Example: VECTOR usage
*
* Author: Ram Sever
*
***********************************/

using namespace std;

void main(int argc, char* argv[]){

	// Allocate a vetor of 10 integers
	vector<int> my_vector(10);

	// set the second element to be equal to 1
	my_vector[1] = 1;

	// print the vector content
	cout << "my_vector content:\n";
	for (int k=0;k<my_vector.size();k++){
		cout << my_vector[k] << " ";
	}
	cout << "\n";

	// print the current vector size (should be 10 elements)
	cout << "my_vector.size()=" << my_vector.size() << "\n";

	// resize the vector size from 10 elements to 20 elements
	// note that the first 10 elements are not erased
	my_vector.resize(20);

	// print the vector content
	cout << "my_vector content:\n";
	for (int k=0;k<my_vector.size();k++){
		cout << my_vector[k] << " ";
	}
	cout << "\n";
	cout << "my_vector.size()=" << my_vector.size() << "\n";

	cout << "Press any key to exist\n";
	_getch();

}