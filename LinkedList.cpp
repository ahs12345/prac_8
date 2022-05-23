#include "LinkedList.h"
#include "stdio.h"
#include <iostream>
#include <limits>

using namespace std;


    LinkedList::LinkedList(){
        head = NULL;
    }
    LinkedList::LinkedList(int myArray[], int arraySize){
        head = NULL;
        for (int i =0; i < arraySize; i++){
            addEnd(myArray[i]);
        }

    }
    void LinkedList::addFront(int newItem){
        Node* tempNode = new Node(newItem, head);
        head = tempNode;
    }
    void LinkedList::addEnd(int newItem){
        if (head == NULL){
            head = new Node(newItem, NULL);
        }
        else {
            Node * iterator = head;
            while (iterator-> getNext()){
                iterator = iterator->getNext();
            }
            iterator->setNext(new Node(newItem, NULL));
        }
    }
    void LinkedList::addAtPosition(int position, int newItem){
        if(position <= 1){
            addFront(newItem);
        }
        else {
            int count = 1;
            Node * iterator = head;

            while(iterator->getNext()){
                if (count == position){
                    Node* tempNode = new Node(newItem, iterator->getNext());
                    iterator->setNext(tempNode);
                    break;
                }
                else if(count > position){
                    addEnd(newItem);
                }
                iterator = iterator->getNext();
                count ++;
            }


        }
        

    }

    int LinkedList::search(int item){
        Node * iterator = head;
        int position = 1;

        while (iterator){
            if (iterator->getData() == item){
                printf("%d ", position);
                return position;
            }
        }
        cout << "0 ";
        return 0;

    }
    void LinkedList::deleteFront(){
        if (head != NULL){
            Node* memory = head;
            head=(head->getNext());
            delete(memory);
        }
    }
    void LinkedList::deleteEnd(){
        int count = 1;
        Node* iterator = head;
        while (iterator->getNext()){
            if (iterator->getNext()->getNext() == NULL){

                Node* memory = iterator->getNext();
                memory->setNext(NULL);
                delete(memory);

            } 
        }

    }
    void LinkedList::deletePosition(int position){

        if (position < 1){
            cout << "outside range";
            return;
        }
        if (position == 1){
            deleteFront();
            return;
        }
        int count = 1;
        Node * iterator = head;

        while (iterator)
        {
            if (count == position - 1){
                Node* memory = iterator->getNext();
                iterator->setNext(iterator->getNext()->getNext());
                delete(memory);
            }
            if (count > position){
                cout << "outside range";
                return;
            }
            iterator = iterator->getNext();
            count++;
        }
        


    }
    int LinkedList::getItem(int position){
        int count = 1;
        Node * iterator = head;
        if (iterator){
            while (iterator){
                if (count == position){
                    printf("%d ", iterator->getData());
                    return iterator->getData();
                }
                else if(count > position){
                    cout << numeric_limits < int >::max() << " ";
                    return numeric_limits < int >::max();
                }
            iterator = iterator->getNext();
            count++;
            }
        }
        else {
            cout << numeric_limits < int >::max() << " ";
            return numeric_limits < int >::max();
        }

    }
    void LinkedList::printItems(){
        Node * iterator = head;

        while(iterator){
            printf("%d ", iterator->getData());
            iterator = iterator->getNext();
        }

    }
    LinkedList::~LinkedList(){
         Node * iterator = head;
        while(iterator){
            Node * currentValue = iterator;
            iterator = iterator->getNext();
            delete(currentValue);
        }
    }
