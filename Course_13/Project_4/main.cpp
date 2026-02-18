#include <iostream>
#include "clsDynamicArray.h"
using namespace std;

int main(){
    clsDynamicArray <int> array(5);
    array.setItem(0, 10);
    array.setItem(1, 20);
    array.setItem(2, 30);
    array.setItem(3, 40);
    array.setItem(4, 50);
    array.PrintList();
    array.insertAt(2, 25);
    array.PrintList();
    array.insertAtBeginning(5);
    array.PrintList();
    array.insertAtEnd(60);
    array.PrintList();
    array.insertBefore(2, 22);
    array.PrintList();
    array.deleteFirstItem();
    array.PrintList();
    array.deleteLastItem();
    array.PrintList();
    cout << array.Size() << endl;
    array.Reverse();
    array.PrintList();
    cout << array.Find(30) << endl;
    array.deleteItem(30);
    array.PrintList();
    array.deleteItem(300);
    array.PrintList();
    array.resize(10);
    array.PrintList();
    cout << array.Size() << endl;
    array.resize(2);
    array.PrintList();
    cout << array.Size() << endl;
    array.Clear();
    array.PrintList();
    cout << array.Size() << endl;

   
}
