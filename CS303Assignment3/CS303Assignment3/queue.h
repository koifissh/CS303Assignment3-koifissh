#pragma once
#include <string>
#include <iostream>
#include <string>
using namespace std;

template <typename item_Type>
struct Node {
	item_Type data;
	Node* next;
};

template<typename item_Type>
class Queue
{
private:
	Node<item_Type>* head;
	Node<item_Type>* tail;
	int num_Items;
public:
	Queue() {
		head = nullptr;
		tail = nullptr;
		num_Items = 0;
	};

	~Queue() {
		while (head != nullptr) {
			Node<item_Type>* tempNode = head;
			head = head->next;
			delete tempNode;
		}
	};

	item_Type enQueue() {
		item_Type item = ask();
		Node<item_Type>* tempNode = new Node<item_Type>;
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
		return tail->data;
	};

	item_Type deQueue() {
		if (empty()) {
			cout << "List is empty" << endl;
			return "Nothing removed";
		}
		else {
			Node<item_Type>* tempNode = head;
			item_Type removedData = head->data;
			head = head->next;
			delete tempNode;
			if (head == nullptr) {
				tail = nullptr;
			}
			num_Items--;
			return removedData;
		}
	};

	item_Type peek() {
		if (empty()) {
			cout << "List is empty" << endl;
		}
		else {
			return head->data;
		}
	};

	bool empty() {
		return num_Items == 0;
	};

	int size(){
		return num_Items;
	};

	item_Type ask() {
		item_Type input;
		cout << "Enter an input to be used: ";

		cin >> input;
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

		return input;

	};

	void display() {
		if (empty()) {
			cout << "List is empty" << endl;
		}
		else {
			Node<item_Type>* tempNode = head;
			while (tempNode != nullptr) {
				cout << tempNode->data << " ";
				tempNode = tempNode->next;
			}
			cout << endl;
		}
	};

};