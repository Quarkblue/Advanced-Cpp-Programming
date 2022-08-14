#pragma once

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

#include<iostream>

using namespace std;

namespace AdvancedCppProgramming {
	
	template<class T>
	class Test {
	private:
		T obj;
	public:
		Test(T obj){
			this->obj = obj;
		}
		void print() {
			cout << obj << endl;
		}
		
		template<class U>
		friend ostream& operator<<(ostream& out, const Test<U>& c);
		
	};

	template<class T>
	ostream& operator<<(ostream& out, const Test<T>& c) {
		out << c.obj;
		return out;
	}
	
}



#endif