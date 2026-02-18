#pragma once
#include <iostream>
using namespace std;
#include "/Users/shamsafarany/Desktop/repos/Roadmap/Course_13/Project_5/clsQueueArr.h"

template <class T>
class clsStackArr: public clsQueueArr<T>{
    clsQueueArr <T> _Queue;
    public:
    void push(T value) {
        _Queue.insertAtFront(value);
    }
    void pop(){
        _Queue.pop();
    }
    void Print(){
        _Queue.Print();
    }
    T Top(){
        return _Queue.front();
    }
    T Bottom(){
        return _Queue.back();
    }
};