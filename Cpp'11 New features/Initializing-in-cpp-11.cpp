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

	int value1{};
	cout << value1 << endl;
	
	int* plol{nullptr};   // Equivalent to int *plol = nullptr
	
	cout << plol << endl;
	
	struct {
		int value;
		string text;
	}s1{5, "Hello"};
	
	cout << s1.text << endl;
	
	vector<string> strings{ "One", "Two", "Three" };

	cout << strings[2] << endl;

	return 0;
}

