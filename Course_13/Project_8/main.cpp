#include <iostream>
#include <string>
#include "clsQueueLine.h"
using namespace std;

int main(){
    clsQueueLine PayBillsQueue("A0", 10);
    clsQueueLine SubscriptionsQueue("BO", 5);

    cout <<"Pay Bills Queue" << endl;
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    PayBillsQueue.PrintInfo();
    PayBillsQueue.printTicketsLineRTL();
    PayBillsQueue.printTicketsLineLTR();
    PayBillsQueue.printAllTickets();

    PayBillsQueue.serveNextClient();
    PayBillsQueue.PrintInfo();

    cout <<"Subscriptions Queue " << endl;
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.PrintInfo();
    SubscriptionsQueue.printTicketsLineRTL();
    SubscriptionsQueue.printAllTickets();
    SubscriptionsQueue.serveNextClient();
    SubscriptionsQueue.PrintInfo();
    SubscriptionsQueue.printAllTickets();

}