#include <iostream>
#include <string>
#pragma once
using namespace std;

/*template <typename item_Type>
struct stackNode {
	item_Type data;
	stackNode* next;
};

template<typename item_Type>
class stack
{
	private:
		stackNode<item_Type>* head;
		stackNode<item_Type>* tail;
		int num_Items;

	public:
		void push(item_Type inputChar) {
			item_Type item = inputChar;
			stackNode<item_Type>* tempNode = new stackNode<item_Type>;
			tempNode->data = item;
			tempNode->next = nullptr;
			if (empty()) {
				head = tempNode;
			}
			else {
				tail->next = tempNode;

			}
			tail = tempNode;
			num_Items++;
		};

		void pop() {
			if (empty()) {
				cout << "List is empty" << endl;
			}
			else {
				if (head == tail) {
					delete tail;
					head = nullptr;
					tail = nullptr;
					num_Items--;
				}
				else {
					stackNode<item_Type>* temp = head;
					while (temp->next != tail) {
						temp = temp->next;
					}
					temp->next = nullptr;
					delete tail;
					tail = temp;
					num_Items--;
				}
			}
		};

		item_Type peek() {
			return head->data;
		};

		bool empty() {
			return num_Items == 0;
		};

		
};
*/

void inPostFix(string infixInput);
int operatorCheck(char row);