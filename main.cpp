#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {


/*
int myArray[100];
string input;
int count = 0;
int param1;
int param2;

while (cin >> input){
    if (isdigit(input[0])){
        myArray[count] = stoi(input);
        count++;
    }
    else {
        break;
    }
}
LinkedList myLinkedList(myArray, count);
if (input == "AF")

    {
        cin >> param1;
        myLinkedList.addFront(param1);
        myLinkedList.printItems();

    }

    else if (input == "AE")
    {

        cin >> param1;

        myLinkedList.addFront(param1);

        myLinkedList.printItems();

    }

    else if (input == "AP")

    {

        cin >> param1;

        cin >> param2;

        myLinkedList.addAtPosition(param1, param2);

        myLinkedList.printItems();

    }

    else if (input == "S")

    {

        cin >> param1;

        myLinkedList.search(param1);

        myLinkedList.printItems();

    }

    else if (input == "DF")

    {

        myLinkedList.deleteFront();

        myLinkedList.printItems();

    }

    else if (input == "DE")

    {

        myLinkedList.deleteEnd();

        myLinkedList.printItems();

    }

    else if (input == "DP")

    {

        cin >> param1;

        myLinkedList.deletePosition(param1);

        myLinkedList.printItems();

    }

    else if (input == "GI")

    {

        cin >> param1;

        myLinkedList.getItem(param1);

        myLinkedList.printItems();

    }



*/

int myArray[] = {5, 2, 7, 10};
int myArray2[] = {3, 4, 2, 1};
int myArray3[] = {45, 20, 2, 10};

LinkedList list1(myArray, 4);
LinkedList list2(myArray2, 4);
LinkedList list3(myArray3, 4);
/*
list1.addAtPosition(1, 9);
list1.printItems();

list2.deleteEnd();;
list2.printItems();


cout << endl;
*/
list3.search(5);
list3.printItems();
cout << endl;










return 0;
}
