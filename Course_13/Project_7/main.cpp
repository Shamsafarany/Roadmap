#include <iostream>
#include "clsString.h"
using namespace std;

int main(){
    cout << "\n\n\t\t\t\tUndo /Redo Project \n\n";
    clsString s1;
    s1.set("");
    cout << "S1: " << s1.Value << endl;
    s1.set("hala1");
    cout << "S1: " << s1.Value << endl;
    s1.set("hala2");
    cout << "S1: " << s1.Value << endl;
    s1.set("hala3");
    cout << "S1: " << s1.Value << endl;

    cout << "Undo: " << endl;
    cout << "\n_______________\n";
    s1.Undo();
    cout << s1.get()<< endl;
    s1.Undo();
    cout << s1.get()<< endl;
    s1.Undo();
    cout << s1.get()<< endl;


    cout << "Redo: " << endl;
    cout << "\n_______________\n";
    s1.Redo();
    cout << s1.get()<< endl;
    s1.Redo();
    cout << s1.get()<< endl;
    s1.Redo();
    cout << s1.get()<< endl;



}