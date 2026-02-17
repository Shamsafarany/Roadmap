#include <iostream>
using namespace std;

template <class T>
class clsMyQueue{
    public:
    class Node{
        public:
            T data;
            Node* Next;            
        };

    Node* head;
    int count;
    public:
    clsMyQueue() {
        head = NULL;
        count = 0;
    }
    bool isEmpty(){
        return head == NULL;
    }
    int Size(){
        return count;
    }
    void push(T value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode ->Next = head;
        head = newNode;
        count++;
    }
    void Print(){
        Node *temp =head;
        while (temp!= NULL) {
            cout << temp->data << " ";
            temp = temp -> Next;
        }
        cout << endl;
    }
    T front() {
        Node *temp =head;
        while (temp->Next != NULL) {
            temp = temp -> Next;
        }
        return temp->data;
    }
     T back() {
        return head-> data;
    }
    void pop(){
        Node *temp =head;
        while (temp->Next != NULL) {
            temp = temp -> Next;
        }
    }

};