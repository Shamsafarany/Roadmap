#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray{
    int size;
    public:
    T* array;
    clsDynamicArray(int size = 0){
        if (size < 0){
            size = 0;
        }
        this->size = size;
        array = new T[size];
    }

    void setItem(int index, T value){
        if (index < 0 || index >= size) {
            return;
        }
        array[index] = value;
    }
    bool IsEmpty(){
        return size == 0;
    }
    int Size(){
        return size;
    }
    void PrintList(){
        for (int i = 0; i < size; i++) {
            cout << *(array + i) << " ";
        }
        cout << endl;
    }

    void resize(int newSize) {
        if (newSize < 0) {
            newSize = 0;
        }
        T *newArr = new T[newSize];
        if (newSize < size) {
            size = newSize;
        }
        for (int i = 0; i < size; i++) {
            newArr[i] = array[i];
        }
        delete[] array;
        size = newSize;
        array = newArr;
    }

    T GetItem(int index) {
        return array[index];
    }
    void Reverse(){
        T *newArr = new T[size];
        for (int i = 0; i < size; i++) {
            newArr[i] = array[size - 1 - i];
        }
        delete[] array;
        array = newArr;
    }
    void deleteItemAt(int index) {
        int count = 0;
        if (index < 0 || index >= size) {
            return;
        }
        
        T *newArr = new T[size-1];
        for (int i = 0; i < size; i++) {
            if (index == i) {
                continue;
            } 
             newArr[count] = array[i];
             count++;     
        }
        delete[] array;
        array = newArr;
        size--;
    }
    void deleteFirstItem(){
        deleteItemAt(0);
    }
    void deleteLastItem(){
        deleteItemAt(size - 1);
    }
     int Find(T value) {
        for (int i = 0; i < size; i++) {
            if (array[i] == value) {
                return i;
            }
        }
        return -1;
    }
    void deleteItem(T value) {
        int index = Find(value);
        if(index == -1) {
            return;
        }
        deleteItemAt(index);
    }
   
    void insertAt(int index, T value) {
        if (index < 0 || index > size) {
            return;
        }
        int count = 0;
        T *newArr = new T[size+1];
        size++;
        for (int i = 0; i < size; i++) {
             newArr[count] = array[i];
             if (index == i) {
               newArr[count] = value;
               count++;
               newArr[count] = array[i];
             } 
             count++;     
        }
        delete[] array;
        array = newArr;
    }
    void insertAtBeginning(T value) {
        insertAt(0 , value);
    }
    void insertAtEnd(T value) {
        insertAt(size, value);
    }
    void insertBefore(int index, T value) {
        insertAt(index--, value);
    }
    void insertAfter(int index, T value) {
        insertAt(index++, value);
    }
    void Clear(){
        size = 0;
        T *newArr = new T[0];
        delete[] array;
        array = newArr;
    }
    ~clsDynamicArray(){
        delete [] array;
    }
};