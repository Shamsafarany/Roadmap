#include <iostream>
using namespace std;

void printTableHeader(){
    cout << "\n\t\t\t Multiplication Table \t\t\t\n";
    cout << "\t";

    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout <<"\n_______________________________________________________________________________________________________\n";
}
string colSeparator(int n) {
    if (n < 10) {
        return "   |";
    } else {
        return "  |";
    }
}

void printMultiplicationTable(){
    printTableHeader();
    for (int i = 1; i <=10; i++) {
        cout << " " << i << colSeparator(i) << '\t'; 
        for (int j = 1; j <= 10; j++) {
            cout << i * j << '\t';
        }
        cout << endl;
    }
}


int main(){
    printMultiplicationTable();
}