//CatList.cpp
//Joseph Williams 
//J00692590
//The main file is CatListDriver.cpp

#include "CatList.h"
#include "Cat.h"
#include <iostream>

using namespace std;

//constructor
CatList::CatList() {
	head = NULL;
	tail = NULL;
}


//destructor 
CatList::~CatList() {
	while (!isEmpty()) {
		removeHead();
	}
}


//Removes a Cat from the front of the list
void CatList::removeHead() {
	Node* newNode = new Node;
	newNode = head;
	head = newNode->next;
	delete newNode;
}


// checks if list is empty and returns T/F
bool CatList::isEmpty() {
	return (head == NULL);
}


//adds to the front of the list
void CatList::addElementFront(const Cat& e) {
	Node* newNode = new Node;
	newNode->data = e;
	newNode->prev = NULL;
	newNode->next = head;

	if (head != NULL) {
		head->prev = newNode;
	}
	else {
		tail = newNode;
	}

	newNode->next = head;
	head = newNode;
}


//adds to the back of the list
void CatList::addElementEnd(const Cat& e) {
	Node* newNode = new Node;
	newNode->data = e;
	newNode->next = NULL;

	if (tail != NULL) {
		tail->next = newNode;
	}
	else {
		head = newNode;
	}

	newNode->prev = tail;
	tail = newNode;
}


//Search for and Display a Cat in the list
bool CatList::searchCat(string fname) {
	Node* newNode = head;

	while (newNode != NULL) {
		if (newNode->data.getfirstname() == fname) {
			cout << "Cat is in the list:" << endl;
			newNode->data.showCat();
			return true;
		}
		newNode = newNode->next;
	}

	cout << "Cat is not in the list." << endl;
	return false;
}


//Search for and delete a Cat in the list
void CatList::deleteCat(string fname) {
	Node* newNode = head;

	while (newNode != NULL) {
		if (newNode->data.getfirstname() == fname) {
			if (newNode->prev == NULL) {
				head = newNode->next;
			}
			else {
				newNode->prev->next = newNode->next;
			}

			if (newNode->next == NULL) {
				tail = newNode->prev;
			}
			else {
				newNode->next->prev = newNode->prev;
			}
			cout << "Cat is removed from list" << endl;
			return;
		}
		newNode = newNode->next;
	}

	cout << "Cat is not in the list." << endl;
}


// Search for and replace the firstname of a cat in the list
void CatList::editCat(string fname1, string fname2) {
	Node* newNode = new Node;
	newNode = head;
	bool found = false;
	while (newNode != NULL) {
		if (newNode->data.getfirstname() == fname1) {
			newNode->data.setfirstname(fname2);
			return;
		}
		newNode = newNode->next;
	}

	cout << "Cat is not in the list." << endl;
}


//Print the list from head to tail
void CatList::showForward() {
	if (!isEmpty()) {
		cout << "The list from front to back:" << endl;
		Node* newNode = head;
		while (newNode) {
			newNode->data.showCat();
			newNode = newNode->next;
		}
		cout << endl;
	}
	else {
		cout << "List is empty" << endl;
	}
}


//Print the list from tail to head
void CatList::showBackward() {
	if (!isEmpty()) {
		cout << "The list from back to front:" << endl;
		Node* newNode = tail;
		while (newNode) {
			newNode->data.showCat();
			newNode = newNode->prev;
		}
		cout << endl;
	}
	else {
		cout << "List is empty" << endl;
	}
}