#include <iostream>
#include <queue>
#include <conio.h>

/**********************************
*
* Example: QUEUE usage
*
* Author: Ram Sever
*
***********************************/

using namespace std;

void main(int argc, char* argv[]){

	// create a queue of ten integers
	queue<int> my_queue;

	cout << "my_queue size is = " << my_queue.size() << "\n";

	// push couple of elements into the queue
	my_queue.push(1);
	my_queue.push(2);
	my_queue.push(3);
	cout << "my_queue.size()=" << my_queue.size() << "\n";

	// pull couple of elements from the queue
	// however since there is no pull method, pulling
	// is done in two steps: 
	// front() and pop()
	cout << my_queue.front() << "\n"; my_queue.pop();
	cout << my_queue.front() << "\n"; my_queue.pop();
	cout << my_queue.front() << "\n"; my_queue.pop();
	cout << "my_queue.size()=" << my_queue.size() << "\n";

	cout <<  "Press any key to exist\n";
	_getch();

}
