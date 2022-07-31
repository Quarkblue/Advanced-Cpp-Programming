// Learn Advance C++ Programming
// Two-Dimensional Vectors

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	
	vector< vector<int> > grid(3,vector<int>(4,7));
	
	for (int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++) {
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}
	
	return 0;
}