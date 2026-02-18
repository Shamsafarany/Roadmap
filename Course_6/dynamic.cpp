#include <iostream>

using namespace std;

int main(){
    int *p, size;
    p = new int;
    *p = 10;
    cout << *p << endl;
    //dynamic array
    cout <<"Enter size: ";
    cin >> size;
    cout <<"Enter numbers: ";
    int *arr = new int[size]; 
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i) ;
    }
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << endl;
    }

    delete[] arr;
    delete p;

   
}