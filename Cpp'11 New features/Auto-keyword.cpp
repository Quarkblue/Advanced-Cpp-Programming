// Learn Advance C++ Programming
// The Auto Keyword

#include<iostream>

using namespace std;

template<class T, class S>
auto test(T value, S value2) -> decltype(value + value2) {

	return value + value2;
}

int get() {
	return 999;
}

auto test2() -> decltype(get()) {
	return get();
}

int main() {

	auto value = 7;
	auto text = "Hello";

	cout << test(5,6) << endl;

	cout << test2() << endl;
	
	return 0;
}

