#include <iostream>
#include <cstdlib> 
#include <ctime>    

using namespace std;
int readInput(string msg){
    int n;
    do{
        cout <<msg << ": ";
        cin >> n;
    }while (n < 0);
    return n;
}
int randNum(int min, int max){
    return (int(rand()) % (max - min + 1)+ min);
}

char getChar(int operation) {
    switch(operation) {
        case 1: return (char)(randNum(65, 90)); 
        case 2: return (char)(randNum(97, 122)); 
        case 3: return (char)(randNum(33, 47)); 
        case 4: return (char)(randNum(48, 67)); 
    }
}
string generateKey(){
    string res = "";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            res.append(1, getChar(1));
        }
        res.append("-");
    }
    return res;
}


void generateKeys(string arr[100], int n) {
    for (int i = 0; i <= n; i++) {
        arr[i] = generateKey();
    }
}
void printArray(string arr[100], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}
int main(){
    srand(time(NULL));
    string keys[100];
    int n = readInput("num of keys");
    generateKeys(keys, n);
    printArray(keys, n);
    
    

}