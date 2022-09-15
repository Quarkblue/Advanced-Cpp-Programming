#include<iostream>
#include<vector>

using namespace std;

int main() {

	int value{5};

	cout << value << endl;
	
	int nums[]{ 1,2,4 };
	
	cout << nums[1] << endl;

	int* pInts = new int[3] {1, 2, 3};
	cout << pInts[1] << endl;
	delete pInts;
	
	return 0;
}

