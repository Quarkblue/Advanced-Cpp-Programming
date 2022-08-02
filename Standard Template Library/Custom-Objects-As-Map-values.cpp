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
	
	Person() : name(""), age(0) {
		
	}
	
	Person(const Person &other) {
		cout << "Copy constructor running!" << endl;
		name = other.name;
		age = other.age;
	}
	
	Person(string name, int age) :
		name(name), age(age) {
		
	}

	void print() const {
		cout << name << " : " << age << flush;
	}

	bool operator<(const Person& other) const;
	
};


int main() {
	
	map<Person, int> people;
	
	people[Person("Mike", 40)] = 0;
	people[Person("raj", 30)] = 1;
	people[Person("sue", 20)] = 2;
	
	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
		
		cout << it->second << " : " << flush;
		it->first.print();
		
	}
	return 0;
	
}