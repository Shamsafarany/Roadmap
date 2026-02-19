#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Ticket{
    string prefix;
    int waitingClient;
    int ServeTime;
    string time;
    
    public:
    Ticket(string prefix, int waitingClient, int serveTime, string time) {
        this->prefix = prefix;
        this->waitingClient = waitingClient;
        this->time = time;
        this->ServeTime = serveTime;
    }
    void displayTicketInfo(){
        cout<<"\n\n";
        cout << "\t     " << this->prefix << endl;
        cout <<"\n";
        cout << this->time << endl;
        cout <<"Waiting Clients: " << this->waitingClient << endl;
        cout <<"Serve Time In " << this->ServeTime<< " Minutes." << endl;
        cout <<"_____________________________\n";
    }

    string getPrefix(){
        return this->prefix;
    }
};