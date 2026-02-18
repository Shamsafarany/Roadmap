#include <iostream>
#include "clsStackArr.h"
using namespace std;

int main(){
    clsStackArr <int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    stack.Print();
    stack.pop();
    stack.pop();
    stack.Print();
}