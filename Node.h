#ifndef NODE_H
#define NODE_H


class Node{
    private:
    int data;
    Node* next;

    public:
    Node(int nodeData, Node* nodeNext);
    void setData(int nodeData);
    int getData();
    void setNext(Node* nodeNext);
    Node * getNext();


};
#endif
