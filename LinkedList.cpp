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
        arrayLength = arraySize;
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

            while(iterator){
                if (count == position-1){
                    Node* tempNode = new Node(newItem, iterator->getNext());
                    iterator->setNext(tempNode);
                    break;
                }
                iterator = iterator->getNext();
                if(count >= position){
                    addEnd(newItem);
                }
                count++;
                
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
            iterator = iterator->getNext();
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
        while (iterator){
            if (iterator->getNext()->getNext() == NULL){

                Node* memory = iterator->getNext();
                iterator->setNext(NULL);
                delete(memory);

            }
            count++;
            iterator = iterator->getNext(); 
        }

    }
    void LinkedList::deletePosition(int position){

        if (position < 1 || position > arrayLength){
            cout << "outside range";
            return;
        }
        if (position == 1){
            deleteFront();
            return;
        }

        if (position == arrayLength){
            deleteEnd();
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
            count++;
            iterator = iterator->getNext();
        }
        


    }
    int LinkedList::getItem(int position){
        int count = 1;
        Node * iterator = head;
            while (iterator){
                if (count == position){
                    printf("%d ", iterator->getData());
                    return iterator->getData();
                }
                iterator = iterator->getNext();
                count++;
            }

            if(count > position){
                    cout << numeric_limits < int >::max() << " ";
                    return numeric_limits < int >::max();
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
