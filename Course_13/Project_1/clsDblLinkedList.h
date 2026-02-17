#include <iostream>
using namespace std;

template <class T>

class clsDblLinkedList{
    public:
    class Node{
        public:
            T data;
            Node* Next;
            Node* Prev;
            
    };
    Node* head;
    int count;
    public:
    clsDblLinkedList() {
        head = NULL;
        count = 0;
    }

    bool isEmpty(){
        return head == NULL;
    }
    void insertAtBeginning(T value){
        Node *newNode = new Node();
        newNode-> data = value;
        newNode-> Next = head;
        newNode->Prev = NULL;
        if (!isEmpty()) {
            head -> Prev = newNode;
        }
        head = newNode;
        count++;
    }
    void printList(){
        Node* temp = head;
        while(temp!= NULL) {
            cout <<temp->data << " ";
            temp = temp->Next;
        }
        cout << endl;
    }
    Node* Find(T value){
        Node *temp = head;
        while (temp!=NULL && temp->data != value) {
            temp = temp->Next;
        }
        if (temp!= NULL) {
            return temp;
        } 
        return NULL;
    }

    void insertAfter(int index, T value){
        Node* newNode = new Node();
        Node* temp = head;
        newNode -> data = value;
        int counter = 0;
        if (head==NULL) {
            insertAtBeginning(value);
        }
        while (counter < index){
            temp = temp->Next;
            counter++;
        }
        newNode -> Next = temp-> Next;
        newNode -> Prev = temp;
        if (temp->Next != NULL) {
            temp->Next ->Prev = newNode;
        }
        temp->Next = newNode;
        count++;
    }
    void insertAtEnd(T value) {
        Node* newNode = new Node();
        Node* temp = head;
        newNode -> data = value;
        if (head==NULL) {
            newNode->Prev = NULL;
            head = newNode;
            count++;
            return;
        }
        while (temp->Next != NULL) {
            temp = temp -> Next;
        }
        newNode ->Next = NULL;
        newNode -> Prev = temp;
        temp->Next = newNode;
        count++;
    }

    void deleteFirstNode() {
        Node* temp = head;
        if (isEmpty()) {
            return;
        }
        if (head->Next == NULL) {
            delete head;
            head = NULL;
            count--;
            return;
        }
        temp->Next->Prev = NULL;
        head = temp->Next;
        delete temp;
        count--;
    }
    void deleteLastNode(){
        Node* temp = head;
        if (head->Next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        while(temp->Next!= NULL) {
            temp = temp -> Next;
        }
        temp -> Prev -> Next = NULL;
        delete temp;
        count--;
    }
    void deleteNode(int index){
        Node* temp = head;
        int Count = 0;
        if (isEmpty()) {
            return;
        }
        if (index == 0) {
            deleteFirstNode();
            return;
        }
        if (head->Next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        while(temp!= NULL && Count < index) {
            temp = temp -> Next;
            Count++;
        }
        if (temp!= NULL) {
            temp -> Next -> Prev = temp ->Prev;
            temp->Prev->Next = temp->Next;
          delete temp;
        }
        count--;
        
    }

    int size(){
        return count;
    }
    void clear(){
        while(count > 0) {
            deleteFirstNode();
            cout<<"cleared" << endl;
        }
    }

    void reverseList(){
        Node* temp = head;
        Node* newHead = NULL;
        while (temp!=NULL) {
            Node* temp1 = temp->Next;
            temp->Next = temp->Prev;
            temp->Prev = temp1;
            newHead = temp;
            temp = temp1;
        }
        head= newHead;
    }

    Node* getNode(int index) {
        Node *temp = head;
        int counter= 0;
        if (index > size() || index < 0) {
            return NULL;
        }
        while (temp!=NULL && counter< index) {
            temp = temp->Next;
            counter++;
        }
        if (temp!= NULL) {
            return temp;
        } 
        return NULL;
    }

    T getItem(int index) {
        Node* node = getNode(index);
        if (node) {
            return node -> data;
        } else {
            return NULL;
        }
    }
    void updateItem(int index, T value) {
        Node* node = getNode(index);
        if (node) {
            node->data = value;
        }
    }
    

};