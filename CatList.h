//CatList.h
//Joseph Williams 
//J00692590
//The main file is CatListDriver.cpp

#pragma once
#include<string>
#include "Cat.h"
#include "CatNode.h"
using namespace std;

class CatList {
public:
    Node* head;
    Node* tail;

    // constructor
    CatList();
    // destructor
    ~CatList();
    
    // helper functions
    void removeHead();
    bool isEmpty();

    // list operations
    void addElementFront(const Cat& cat); // Add cat to the front of the list
    void addElementEnd(const Cat& cat); // Add cat to the back of the list
    bool searchCat(string fname); // Search for and display a specific cat in the list
    void editCat(string fname1, string fname2); // Edit a specific cat in the list
    void deleteCat(string fname); // Delete a specific cat from the list
    void showForward(); // Display the entire list front to back
    void showBackward(); // Display the entire list in reverse order    

};

