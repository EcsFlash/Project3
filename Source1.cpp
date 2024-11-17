#include "Header.h"
#include "string"
#include <iostream>
#include "Stack.h"
#include "gena.h"
#include "LListTuple.h"
using namespace std;
int main() {
	
	Stack<Tuple> stTuples;
	Tuple tuple;
	Tuple resultingTuple;
	LListTuple list;
	char c = '0';
	int cnt = 1;
	while (c != ' ') {
		c = cin.get();
		if (c == '(') {
			tuple.first = cnt;
			tuple.second = -1;
			stTuples.push(tuple);
		}
		else if(c == ')'){
			resultingTuple = stTuples.peek();
			stTuples.pop();
			resultingTuple.second = cnt;
			list.append(resultingTuple);

		}
		cnt++;
	}
	list.sort();
	cout << list << endl;
}