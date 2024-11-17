#pragma once

template<typename T>
class LList {
protected:
	struct Node {
		T data;
		Node* next;
	};
	Node* head;
public:
	LList() {
		head = nullptr;
	};
	void append(T el) {
		if (!isEmpty()) {
			Node* temp = head;
			while (temp->next != nullptr) {
				temp = temp->next;
			}
			Node* to_add = new Node;
			temp->next = to_add;
			to_add->data = el;
			to_add->next = nullptr;
		}
		else {
			head = new Node;
			head->data = el;
			head->next = nullptr;
		}
	};

	bool isEmpty() {
		return head == nullptr;
	};

	virtual void sort() = 0;
	friend ostream& operator<<(ostream& os, const LList& list) {
		stringstream ss;
		Node* temp = list.head;
		while (temp != nullptr) {
			ss << temp->data << "\t";
			temp = temp->next;
		}
		return os << ss.str();
	}
};