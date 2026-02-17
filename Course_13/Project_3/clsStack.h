#include <iostream>
#include "/Users/shamsafarany/Desktop/repos/Roadmap/Course_13/Project_2/clsQueue.h"
using namespace std;

template <class T>
class clsStack: public clsQueue<T>{
    clsQueue <T> _Queue;
    public:
    void push(T item) {
        //insert at beginning isntead of end
        _Queue._List.insertAtBeginning(item);
    }
    T Top(){
        return _Queue.front();
    }
    T Bottom(){
        return _Queue.back();
    }
  
};