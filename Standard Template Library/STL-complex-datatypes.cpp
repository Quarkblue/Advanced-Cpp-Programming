//Learn Advance C++ Programming
// STL Complex Data Types

#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main() {

	map< string, vector<int> > scores;
	
	scores["mike"].push_back(10);
	scores["mike"].push_back(20);
	scores["vicky"].push_back(15);

	for (map<string, vector<int> >::iterator it = scores.begin(); it != scores.end(); it++) {
		string name = it->first;
		vector<int> scoresList = it->second;
		
		cout << name << " : " << flush;
		
		for (int i = 0; i < scoresList.size(); i++) {
			cout << scoresList[i] << " " << flush;
		}

		cout << endl;
	}
	
	return 0;
}