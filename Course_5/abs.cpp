#include <iostream>
using namespace std;

double readInput(string msg){
    double n;

        cout <<msg;
        cin >> n;
  
    return n;
}
int Abs(int n) {
    if (n < 0) {
        return -1 * n;
    }
    return n;
}
int Floor(float n) {
    if (n < 0) {
        return ((int) n - 1);
    } 
    return ((int)n);
}

int Ceil(float n) {
    if (n < 0) {
        return n;
    } else if (n == 0) {
        return 0;
    }
    else {
        return ((int) n + 1);
    }  
}

int Sqrt(int n) {
    return pow(n, 0.5);
}

float getFraction(float n) {
    return (n - (int) n);
}
int Round(float n) {
    if (abs(getFraction(n)) >= 0.5) {
        if (n > 0){
            return (int)n +1;
        }
        else{
            return (int)n - 1;
        }
    } else {
        return (int) n;
    }
}
int main(){
    cout << Abs(readInput("Enter num: ")) << endl;
    cout << Floor(readInput("Enter num: ")) << endl;
    cout << Ceil(readInput("Enter num: ")) << endl;
    cout << Sqrt(readInput("Enter num: ")) << endl;
    cout << Round(readInput("Enter num: ")) << endl;
}