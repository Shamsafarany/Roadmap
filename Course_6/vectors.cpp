#include <iostream>
#include <vector>
using namespace std;

void readNumbers(vector <int> &Numbers){
    char enter = 'y';
    int input;
    while(enter=='Y' || enter=='y') {
        cout <<"Enter number: ";
        cin >> input;
        Numbers.push_back(input);
        cout<<"Do you want to enter another number? [y | n]? ";
        cin >> enter;
    }
}

void printVector(vector <int> numbers){
    for (int &n : numbers) {
        cout << n << " ";
    }
    cout << endl;
}

int main(){
    vector <int> vNumbers;
    readNumbers(vNumbers);
    printVector(vNumbers);
    cout << vNumbers.size() << endl;
    cout << vNumbers.front() << endl;
    cout << vNumbers.back() << endl;
    cout << vNumbers.at(0) << endl;
    vNumbers.at(0) = 100;
    printVector(vNumbers);
}