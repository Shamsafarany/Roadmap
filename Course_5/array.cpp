#include <iostream>
#include <cstdlib> 
#include <ctime>     
using namespace std;

int randNum(int min, int max){
    return (int(rand()) % (max - min + 1)+ min);
}
int readInput(string msg){
    int n;
    do{
        cout <<msg;
        cin >> n;
    }while (n < 0);
    return n;
}

void fillArrRandomNumbers(int arr[100], int& length) {
    length = readInput("Enter arr size: ");
    for(int i = 0; i < length; i++) {
        arr[i] = randNum(1, 100);
    }
}

void fillArrUserInput(int arr[100], int& length) {
    length = readInput("Enter arr size: ");
    for(int i = 0; i < length; i++) {
       cin >> arr[100];
    }
}

int findMin(int arr[100], int length) {
    int min = arr[0];
    for (int i = 0; i < length; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int findSum(int arr[100], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}
float findAvg(int arr[100], int length) {
    return (float) (findSum(arr, length)) / length;
}

void printArray(int arr[100], int length){
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void copyArr(int arr1[100], int arr2[100], int length) {
    for (int i = 0; i < length; i++) {
        arr2[i] = arr1[i];
    }
}
void reverseCopy(int arr1[100], int arr2[100], int length) {
    for (int i = 0; i < length; i++) {
        arr2[i] = arr1[length - 1 - i];
    }
}

void fillArray(int arr[100], int& length) {
    length = readInput("Enter arr size: ");
    for (int i = 0; i< length; i++) {
        arr[i] = i;
    }
}
void shuffleArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        int randomKey = randNum(i, length -1);
        int temp = arr[i];
        arr[i] = arr[randomKey];
        arr[randomKey] = temp;
    }
}

int searchArr(int arr[100], int length, int value){
    int index = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] == value){
            return i;
        }
    }
    return -1;
}
bool isFound(int arr[100], int length, int value) {
    return (searchArr(arr, length, value) != -1);
}
void addToArray(int arr[100], int length, int value) {
    arr[length] = value;
}
void semiDynamicArr(int arr[100], int& length){
    int finish = 1;
    do{
        int n = readInput("Please enter number: ");
        addToArray(arr, length, n);
        length++;
        finish = readInput("Do you want to continue? YES[1] / NO[0]: ");
    }while (finish);
    cout <<"Number of elements: " << length << endl;
}

void arrayCopyDynamic(int arr1[100], int arr2[100], int length) {
    for (int i = 0; i < length; i++) {
        addToArray(arr2, i, arr1[i]);
    }
}

void copyOddNumbers(int arr1[100], int arr2[100], int length, int& length2) {
    for (int i = 0; i < length; i++) {
        if (arr1[i] % 2 != 0) {
            addToArray(arr2, length2, arr1[i]);
            length2++;
        }
    }
}

bool findIfPrime(int n){
    bool isPrime = true;
    for(int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = false;
            return isPrime;
        }
    }
    return isPrime;
}

void copyPrimes(int arr1[100], int arr2[100], int length, int& length1) {
    for (int i = 0; i < length; i++) {
        if (findIfPrime(arr1[i])) {
            addToArray(arr2, length1, arr1[i]);
            length1++;
        }
    }
}

void copyDistinct(int arr1[100], int arr2[100], int length, int& length1) {
    for (int i = 0;i < length; i++) {
        if (!isFound(arr2, length1, arr1[i])) {
            addToArray(arr2, length1, arr1[i]);
            length1++;
        }
    }
}

bool isPalindromeArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] != arr[length - 1 - i]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[100], arrCopy[100], arrReversed[100], semiDynamicArray[100], oddCopies[100], primeCopies[100], distinctNumbers[100], filledArr[100];
    int length;
    srand(time(NULL));

    fillArray(filledArr, length);
    printArray(filledArr, length);
    shuffleArray(filledArr, length);
    printArray(filledArr, length);

    fillArrRandomNumbers(arr, length);
    printArray(arr, length);
    cout << findMin(arr, length) << endl;
    cout << findSum(arr, length)<< endl;
    cout << findAvg(arr, length)<< endl;
    //copyArr(arr, arrCopy, length);
    reverseCopy(arr, arrReversed, length);
    //printArray(arrCopy, length);
    printArray(arrReversed, length);
    isFound(arr, length, readInput("Enter number to search: ")) ? cout <<"Found" << endl : cout <<"Not found" << endl;

    //--------------------------------------------
    int length1 = 0;
    semiDynamicArr(semiDynamicArray, length1);
    printArray(semiDynamicArray, length1);

    arrayCopyDynamic(arr, arrCopy, length);
    cout <<"Dynamic Array Copied: "<< endl;
    printArray(arrCopy, length);

    length1 = 0;
    copyOddNumbers(arr, oddCopies, length, length1);
    cout <<"Odd Numbers: "<< endl;
    printArray(oddCopies, length1);

    length1 = 0;
    copyPrimes(arr, primeCopies, length, length1);
    cout <<"Prime Numbers: "<< endl;
    printArray(primeCopies, length1);

    length1 = 0;
    copyDistinct(arr, distinctNumbers, length, length1);
    cout <<"Distinct Numbers: "<< endl;
    printArray(distinctNumbers, length1);

    
}