#pragma once
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class clsString{   
    stack <string> _undo;
    stack <string> _redo;
    public:
    string Value;
    void set(string value){
        Value = value;
        _undo.push(value);
    }
    string get() {
        return Value;
    }
    void Undo(){
        if (!_undo.empty()) { 
            _undo.pop();
            _redo.push(Value);
            Value= _undo.top();
           }
      }
      void Redo(){
        if (!_redo.empty()) { 
            Value= _redo.top();    
            _redo.pop();
            _undo.push(Value);
            
        }
      }

  
};