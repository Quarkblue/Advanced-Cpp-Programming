// Learn Advance C++ Programming
// Custom Objects as Map Values

#include<iostream>
#include<map>
#include<String>

using namespace std;

class Person {
private:
	string name;
	int age;
	
public:
	
	Person(string name, int age) :
		name(name), age(age) {
		
	}

	void print() const {
		cout << name << " : " << age << endl;
	}
};


int main() {
	
	map<int, Person> people;
	
	people[0] = Person("Mike", 40);
	people[1] = Person("John", 30);
	people[2] = Person("Mary", 25);
	
}