//**********************************************************
// Author: D.S. Malik
//
// This program tests the various operations on an ordered
// linked list.
//**********************************************************

#include <iostream>
#include "linkedList.h"                             //Line 1
#include "orderedLinkedList.h"                  //Line 2

using namespace std;                            //Line 3

int main()                                      //Line 4
{
    orderedLinkedList<int> list1, list2;        //Line 5
    int num;                                    //Line 6

    cout << "Line 7: Enter numbers ending "
         << "with -999." << endl;               //Line 7
    cin >> num;                                 //Line 8

    while (num != -999)                         //Line 9
    {                                           //Line 10
        list1.insert(num);                      //Line 11
        cin >> num;                             //Line 12
    }                                           //Line 13

    cout << endl;                               //Line 14

    cout << "Line 15: list1: ";                 //Line 15
    list1.print();                              //Line 16
    cout << endl;                               //Line 17

    list2 = list1; //test the assignment operator Line 18

    cout << "Line 19: list2: ";                 //Line 19
    list2.print();                              //Line 20
    cout << endl;                               //Line 21

    cout << "Line 22: Enter the number to be "
         << "deleted: ";                        //Line 22
    cin >> num;                                 //Line 23
    cout << endl;                               //Line 24

    list2.deleteNode(num);                      //Line 25

    cout << "Line 26: After deleting "
         << num << ", list2: " << endl;         //Line 26
    list2.print();                              //Line 27
    cout << endl;

    orderedLinkedList<int> list3, list4;
    cout << "You will now be prompted to make two lists, which will be merged. " << endl;
    cout << "Enter numbers ending "
         << "with -999." << endl;
    cin >> num;

    while (num != -999)
    {
        list3.insert(num);
        cin >> num;
    }

    cout << "Enter numbers ending "
         << "with -999." << endl;
    cin >> num;

    while (num != -999)
    {
        list4.insert(num);
        cin >> num;
    }

    cout << endl;

    cout << "List 3: ";
    list3.print();
    cout << endl;
    cout << "List 4: ";
    list4.print();
    cout << endl;

    orderedLinkedList<int> list5;
    list5.mergeLists(list3, list4);
    cout << "Lists have been merged." << endl;

    cout << "List 3: ";
    list3.print();
    cout << endl;
    cout << "List 4: ";
    list4.print();
    cout << endl;
    cout << "List 5: ";
    list5.print();
    cout << endl;

    return 0;
}