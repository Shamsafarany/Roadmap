#include <iostream>
#include "clsQueueArr.h"
using namespace std;

int main(){

        clsQueueArr <int> queue;
        queue.push(10);
        queue.push(20);
        queue.push(30);
        queue.push(40);
        queue.push(50);
        queue.Print();
        cout<<queue.Size() << endl;
        cout <<queue.front() <<endl;
        cout <<queue.back() <<endl;
        queue.pop();
        queue.Print();
        cout<<queue.Size() << endl;
        //queue.reverse();
        queue.Print();
        //queue.updateItem(2, 300);
        queue.Print();

    
}