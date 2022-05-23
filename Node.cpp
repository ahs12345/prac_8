#include "Node.h"


    Node::Node(int nodeData, Node* nodeNext){
        setData(nodeData);
        setNext(nodeNext);
    }

    void Node::setData(int nodeData){
        data = nodeData;
    }
    int Node::getData(){
        return data;
    }
    void Node::setNext(Node* nodeNext){
        next = nodeNext;
    }
    Node* Node::getNext(){
        return next;
    }
