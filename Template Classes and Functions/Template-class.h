#pragma once

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

#include<iostream>

using namespace std;

namespace AdvancedCppProgramming {
	
	template<class T, class K>
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
	};
}



#endif