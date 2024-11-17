#pragma once
#include <string>
#include <sstream>
using namespace std;

struct Tuple {
	int first;
	int second;
	friend ostream& operator<<(ostream& os, const Tuple& a) {
		//stringstream ss;
		return os << a.first << " " << a.second;
	}
};