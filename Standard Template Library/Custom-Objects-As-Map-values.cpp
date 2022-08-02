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
		cout << name << " : " << age << endl;
	}
};


int main() {
	
	map<int, Person> people;
	
	people[0] = Person("Mike", 40);
	people[1] = Person("John", 30);
	people[2] = Person("Mary", 25);
	
	people.insert(make_pair(55, Person("Bob", 45)));
	people.insert(make_pair(56, Person("Sue", 24)));
	
	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		
		it->second.print();
	}
	return 0;
	
}