#pragma once
#include <iostream> 
#include <sstream> 
using namespace std;

template<typename T>
class Stack {
	struct Node {
		T data;
		Node* next;
		Node(T elem) : data(elem), next(nullptr) {};
	};
	Node* top;
	
public:
	Stack() {
		top = nullptr;
	}

	void pop() {
		if (!isEmpty()) {
			Node* p = top;
			top = top->next;
			delete p;
		}
	}
	bool isEmpty() {
		return top == nullptr;
	}
	T peek() {
		if (!isEmpty()) {
			return top->data;
		}
	}
	void push(T elem) {
		if (isEmpty()) {
			top = new Node(elem);
		}else{
			Node* i = new Node(elem);
			i->next = top;
			top = i;
		}
	}
	
	void clear() {
		if (!isEmpty()) {
			while (top != nullptr) {
				pop();
			}
		}
	}
	~Stack() {
		clear();
	}
	Stack(const Stack& other) {
		top = nullptr;
		Node* temp = other.top;
		while (temp != nullptr) {
			enque(temp->data);
			temp = temp->next;
		}
	}
	Stack& operator=(const Stack& other) {
		top = nullptr;
		Node* temp = other.top;
		while (temp != nullptr) {
			enque(temp->data);
			temp = temp->next;
		}
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Stack& a) {
		stringstream ss;
		Node* temp = a.top;

		while (temp != nullptr) {
			ss << temp->data;
			temp = temp->next;
		}
		return os << ss.str();
	}

};