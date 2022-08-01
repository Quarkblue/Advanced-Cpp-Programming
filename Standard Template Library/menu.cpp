// Learn Advance C++ Programming
// Making a menu excercise

#include<iostream>
#include<list>
#include<string>

using namespace std;


int main() {

	list<string> menu;
	
	menu.push_back("1. Pizza");
	menu.push_back("2. Burger");
	menu.push_back("3. Pasta");
	
	cout << "Menu: " << endl;
	list<string>::iterator it = menu.begin();

	while (it != menu.end())
	{
		cout << *it << endl;
		it++;
	}
	
	int x;
	
	cout << "Choose from menu : ";
	cin >> x;
	cout << endl;
	list<string>::iterator ind = menu.begin();
	advance(ind, x - 1);
	
	cout << "You have chosen: " << *ind << endl;
	
	return 0;
}