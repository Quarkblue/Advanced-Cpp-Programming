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
		// We catch the bad_alloc exception first because
		// it is a subclass of exception and will only run if bad_alloc is thrown
		catch (bad_alloc &e) {
			cout << e.what() << endl;
		}
		// We catch exception at the end because it is a base class and that we can
		// catch any subclass/normal exception that is thrown but not defined before this catch
		catch (exception &e) {
			cout << e.what() << endl;
		}
		
	
	return 0;
}