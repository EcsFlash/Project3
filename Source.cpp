#include "Queue.h"
#include "Stack.h"


int main() {
	Queue<int> queue;
	Stack<int> stack;
	int picked;
	cout << "Chose 1 or 2" << endl;
	cout << "Stack" << endl;
	cout << "ueue" << endl;
	cin >> picked;
	if(picked == 1)

	//int N;
	//cin >> N;
	//char aa;
	//int goblin;
	//for (int i = 0; i < N; i++) {
	//	cin >> aa;
	//	if (aa == '+') {
	//		cin >> goblin;
	//		a.enque<int>(goblin);
	//	}
	//	else if(aa == '*') {
	//		cin >> goblin;
	//		a.enqueInCenter<int>(goblin);
	//	}
	//	else {
	//		//cout << a << endl;
	//		cout << a.peek<int>() << endl;
	//		a.deque<int>();
	//	}
	//}
	a.enque(2);
	a.enque(3);
	a.deque();
	cout << a << endl;
	Queue<int> B(a);
	
}