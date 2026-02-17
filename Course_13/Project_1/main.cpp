#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main(){
    clsDblLinkedList <int> MydblLinkedList;
    MydblLinkedList.isEmpty() ? cout<<"Empty" << endl : cout <<"Not Empty " << endl;
    MydblLinkedList.insertAtBeginning(5);
    MydblLinkedList.insertAtBeginning(4);
    MydblLinkedList.insertAtBeginning(3);
    MydblLinkedList.insertAtBeginning(2);
    MydblLinkedList.insertAtBeginning(1);
    MydblLinkedList.printList();
    clsDblLinkedList<int>:: Node* res1 = MydblLinkedList.Find(2);
    MydblLinkedList.isEmpty() ? cout<<"Empty" << endl : cout <<"Not Empty " << endl;
    cout <<"Size: " << MydblLinkedList.size() << endl;
    clsDblLinkedList<int>:: Node* res2 = MydblLinkedList.getNode(3);
    cout << res2->data << endl;
    cout << MydblLinkedList.getItem(2) << endl;
    MydblLinkedList.updateItem(2, 500);
    MydblLinkedList.insertAfter(1, 400);
    MydblLinkedList.printList();
    MydblLinkedList.reverseList();
    MydblLinkedList.printList();
   

}