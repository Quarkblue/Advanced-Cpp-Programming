// Learn Advance C++ Programming
// Exception Catching order

#include <iostream>
#include <exception>
using namespace std;

void goesWrong() {
	bool error1Detected = true;
	bool error2Detected = false;
	
	if (error1Detected) {
		throw bad_alloc();
	}
	if (error2Detected) {
		throw exception();
	}
}

int main() {

	try 
		{
		goesWrong();
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
		catch (bad_alloc& e) {
			cout << e.what() << endl;
		}
		
	
	return 0;
}