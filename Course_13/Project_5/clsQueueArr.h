#pragma once
#include <iostream>
using namespace std;
#include "/Users/shamsafarany/Desktop/repos/Roadmap/Course_13/Project_4/clsDynamicArray.h"

template <class T>
class clsQueueArr{
    clsDynamicArray <T> _List;
    public:
    void push(T value) {
        _List.insertAtEnd(value);
    }
    void pop(){
        _List.deleteFirstItem();
    }
    void Print(){
        _List.PrintList();
    }
    int Size(){
        _List.Size();
    }
    bool isEmpty(){
        return _List.IsEmpty();
    }
    T front(){
        return _List.GetItem(0);
    }
    T back(){
        return _List.GetItem(Size() - 1);
    }
    T GetItem(int index) {
        return _List.GetItem(index);
    }
    void reverse(){
        _List.reverse();
    }
    void updateItem(int index, T value) {
        _List.setItem(index, value);
    }
    void insertAfter(int index, T value) {
        _List.insertAfter(index, value);
    }
    void insertAtFront(T value) {
        _List.insertAtBeginning(value);
    }
    void insertAtBack(T value) {
        _List.insertAtEnd(value);
    }
    void clear(){
        _List.clear();
    }
    
};