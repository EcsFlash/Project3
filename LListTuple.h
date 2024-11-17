#pragma once
#include "LList.h"
#include "gena.h"

//template<typename T>
class LListTuple : public LList<Tuple> {
public:
	void sort() override {
		if (!isEmpty()) {
			Tuple dataTemp;
			Node* temp;
			Node* temp2 = head;
			while (temp2->next != nullptr) {
				temp = head;
				while (temp->next != nullptr) {
					if (temp->data.first > temp->next->data.first) {
						dataTemp = temp->data;
						temp->data = temp->next->data;
						temp->next->data = dataTemp;
					}
					temp = temp->next;
				}
				temp2 = temp2->next;
			}
		}
	}
};

//A+(45-F()*(B-C))