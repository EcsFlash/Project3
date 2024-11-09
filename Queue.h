#include <iostream> 
#include <sstream> 
using namespace std;



template <typename datatype1>
class Queue {
private:

	struct Node {
		datatype1 data;
		Node* next;
		Node(datatype1 elem) : data(elem), next(nullptr) {};
	};
	Node* head;
	Node* tail;
	int count;
public:
	Queue() {
		head = tail = nullptr;
		count = 0;
	}

	void enque(datatype1 elem) {
		Node* p = new Node(elem);
		if (!isEmpty()) {
			tail->next = p;
			tail = p;
		}
		else {
			head = tail = p;
		}
		count++;
	}

	// template <typename datatype1> 
	// void enqueInCenter(datatype1 elem) { 
	//  Node* p = new Node(elem); 
	//  Node* temp = head; 
	//  int center = count % 2 == 0 ? count / 2 : count / 2 + 1; 
	//  for (int i = 0; i < center-1; i++) { 
	//   temp = temp->next; 
	//  } 
	//  //cout << temp->data << endl; 
	//  p->next = temp->next; 
	//  temp->next = p; 


	// } 


	void deque(){
		cout << head << '\t' << tail << endl;
		cout << isEmpty() << endl;
		if (!isEmpty()) {
			if (head != tail) {
				Node* p = head;
				head = head->next;
				delete p;
				p = nullptr;
				count--;
			}else {
				delete head, tail;
				head = tail = nullptr;
			}
		}
	}

	Queue(const Queue<datatype1>& other) {
		head = tail = nullptr;
		count = 0;
		Node* temp = other.head;
		while (temp != nullptr) {
			this->enque(temp->data);
			temp = temp->next;
		}
	}



	Queue& operator=(const Queue& other) {
		head = tail = nullptr;
		count = 0;
		Node* temp = other.head;
		while (temp != nullptr) {
			this->enque(temp->data);
			cout << temp->data << endl;
			temp = temp->next;
		}
		return *this;
	}
	~Queue() {
		cout << this << endl;
		cout << *this << endl;
		cout << endl;
		clear();



	}

	datatype1 peek() {
		if (!isEmpty()) {
			return head->data;
		}
	}



	bool isEmpty() {
		return head == nullptr && tail == nullptr;
	}



	void clear() {
		while (head != nullptr && tail != nullptr) {
			deque();
		}
	}
	friend std::ostream& operator<<(std::ostream& os, const Queue& a) {
		stringstream ss;
		Node* temp = a.head;

		while (temp != nullptr) {
			ss << temp->data;
			temp = temp->next;
		}
		return os << ss.str();
	}
};
