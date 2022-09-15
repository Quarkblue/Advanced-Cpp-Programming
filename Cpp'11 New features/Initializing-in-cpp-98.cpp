#include<iostream>

using namespace std;

int main() {
	
	int values[] = {1, 4, 5};
	
	class S1 {
	public:
		string text;
		int id;
	};
	
	S1 s1 = { "Hello", 7 };

	struct C {
		string text;
		int id;
	};
	
	C c1 = {"Hello", 7};
	
	return 0;
}
