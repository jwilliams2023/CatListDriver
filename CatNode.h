#pragma once
#include "Cat.h"

// Node Structure to store data and L-R pointers
struct Node {
    Cat data;
    Node* next;
    Node* prev;
};