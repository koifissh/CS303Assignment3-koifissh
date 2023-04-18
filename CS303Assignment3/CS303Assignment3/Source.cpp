#include "queue.h"
#include "infixConverter.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	Queue<string> list;
	string userChoice;
	string itemInput;
	string infixInput;

	while (userChoice != "Q") {
		cout << endl;
		cout << "Select a number to perform the corresponding function" << endl;
		cout << "1. Infix to Postfix" << endl
			<< "2. Enqueue" << endl
			<< "3. Dequeue" << endl
			<< "4. Peek Front Item" << endl
			<< "5. Check if Empty" << endl
			<< "6. Check Queue Size" << endl;
		
		cin >> userChoice;

		switch (toupper(userChoice[0])) {
			case '1':
				cout << "What is your Infix input: " << endl;
				cin.ignore(10000,'\n');
				getline(cin, infixInput);
				inPostFix(infixInput);
				

				break;
			case '2':
				cout << "Added: " << list.enQueue() << endl;
				list.display();
				break;
			case '3':
				cout << "Removed: " << list.deQueue() << endl;
				list.display();
				break;
			case '4':
				cout << list.peek() << endl;
				break;
			case '5':
				cout << "Queue is Empty: " << list.empty();
				break;
			case '6':
				cout << "Queue Size is: " << list.size();
				break;

			default:
				cout << "Invalid Input" << endl;
				break;
		}
	}

}