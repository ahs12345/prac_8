#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
class LinkedList{
    
    private:
    Node* head;

    public:
    LinkedList();
    LinkedList(int myArray[], int arraySize);
    void addFront(int newItem);
    void addEnd(int newItem);
    void addAtPosition(int position, int newItem);
    int search(int item);
    void deleteFront();
    void deleteEnd();
    void deletePosition(int position);
    int getItem(int position);
    void printItems();
    int arrayLength;
    ~LinkedList();

    
};
#endif
