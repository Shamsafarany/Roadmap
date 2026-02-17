#include <iostream>
#include "/Users/shamsafarany/Desktop/repos/Roadmap/Course_13/Project_1/clsDblLinkedList.h"
using namespace std;

template <class T>
class clsQueue{
    clsDblLinkedList <T> _List;
    public:
    void push(T item) {
        _List.insertAtEnd(item);
    }
    void pop(){
        _List.deleteFirstNode();
    }
    int Size(){
        return _List.size();
    }
    void Print(){
        _List.printList();
    }
    bool IsEmpty(){
        return _List.isEmpty();
    }
    T front(){
        return _List.getItem(0);
    }
    T back(){
        return _List.getItem(Size() - 1);
    }
    T GetItem(int index){
        _List.getItem(index);
    }
    void reverse(){
        _List.reverseList();
    }
    void updateItem( int index, T value) {
        _List.updateItem(index, value);
    }
    void Clear(){
        _List.clear();
    }
    void insertAfter(int index, T value) {
        _List.insertAfter(index, value);
    }
    void insertFront(T value) {
        _List.insertAtBeginning(value);
    }
    void insertBack(T value){
        _List.insertAtEnd(value);
    }
};