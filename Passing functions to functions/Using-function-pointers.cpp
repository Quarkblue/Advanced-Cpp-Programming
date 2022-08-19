// Learn Advance C++ Programming
// Using Function pointers

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool match(string test) {
	
	//return test == "two";
	return test.size() == 3;
}

int countStrings(vector<string>& texts, bool(*match)(string test)) {
	int tally = 0;
	for (int i = 0; i < texts.size(); i++) {

		if (match(texts[i]))	 {
			tally++;
		}
		
	}
	return tally;
}

int main() {
	
	vector<string> texts;
	texts.push_back("One");
	texts.push_back("Two");
	texts.push_back("Three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");

	cout << match("one") << endl;

	cout << count_if(texts.begin(), texts.end(), match) << endl;

	cout << countStrings(texts, match) << endl;

	return 0;
}