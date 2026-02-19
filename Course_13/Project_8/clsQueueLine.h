#pragma once
#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include "Tickets.h"
using namespace std;

class clsQueueLine{
    string prefix;
    int min;
    int count;
    int servedClients;
    int waitingClients;
    queue <Ticket> tickets;
    public:
    clsQueueLine(string prefix, int min) {
        this->prefix = prefix;
        this->min = min;   
        this->servedClients = 0;
        this->waitingClients = 0;    
    }
    void IssueTicket(){     
        string newPrefix = calcPrefix(count);
        int totalWaitingTime = calcMin(waitingClients);
        string dt = getTime();
        Ticket t = Ticket(newPrefix, waitingClients, totalWaitingTime, dt);
        tickets.push(t);
        count++;
        waitingClients++;
    }
    string getTime(){
        time_t t = time(0);
        tm* now = localtime(&t);
        string formattedDate = to_string(now->tm_mday) + '/' + to_string(now->tm_mon+1 )+ '/' + to_string(now->tm_year +1900) + "  -  " + to_string(now->tm_hour) + " : " + to_string(now->tm_min) + " : " + to_string(now->tm_sec);
        return formattedDate;
    }
    string calcPrefix(int count){
        string newPrefix="";
        (count < 9) ? (newPrefix = prefix + to_string(count+ 1))
        : (newPrefix = "A" + to_string(count+ 1));
        return newPrefix;
    }
    int calcMin(int waitingClients) {
        if (waitingClients == 0) {
            return 0;
        }
        return min * waitingClients;
    }
    void PrintInfo(){
        cout <<"\n____________\n";
        cout<<"\n";
        cout << "Queue Info " << endl;
        cout <<"\n____________\n";
        cout<<"\n";
        cout<< "Prefix: " << this->prefix << endl;
        cout <<"Total Tickets: " << this->count << endl;
        cout<<"Served Clients: " << this->servedClients <<endl;
        cout <<"Waiting Clients: "<< this->waitingClients << endl;
        cout <<"\n____________\n";
    }
    void printTicketsLineRTL(){
        if (tickets.empty()) {
            cout <<"No tickets added yet! " <<endl;
            return;
        }
       queue <Ticket> temp = tickets;
       cout <<"\n\nTickets:    ";
        while (!temp.empty()){
            cout << temp.front().getPrefix() <<" <-- ";
            temp.pop();
        }
        cout << endl;
    }
    void printTicketsLineLTR(){
        if (tickets.empty()) {
            cout <<"No tickets added yet! " <<endl;
            return;
        }
        stack <Ticket> temp;
        queue <Ticket> tempQueue = tickets;
        cout <<"Tickets:    ";
        while (!tempQueue.empty()) {
            temp.push(tempQueue.front());
            tempQueue.pop();
        }
        while (!temp.empty()){
            cout << temp.top().getPrefix() <<" --> ";
            temp.pop();
        }

    }
    void printAllTickets(){
        if (tickets.empty()) {
            cout <<"No tickets added yet! " <<endl;
            return;
        }
        queue <Ticket> temp = tickets;
        cout << "\n\n\n";
        cout << "-------------Tickets------------\n";
        while (!temp.empty()) {
            temp.front().displayTicketInfo();
            temp.pop();
        }
       
    }
    void serveNextClient(){
        tickets.pop();
        waitingClients--;
        servedClients++;
    }


};

