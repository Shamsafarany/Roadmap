#include <iostream>
#include <string>
#include <cctype>
#include <string>
using namespace std;

int inputRounds(){
    int n;
    do {
        cout <<"How many rounds do you want to play (1 - 10): ";
        cin >> n;
    } while (n < 1 || n > 10);
    return n;
}

char inputRestart() {
    char x;
    do{
        cout<<"Do you want to play another round? YES[y] - NO[n]" << endl;
        cin >> x;
    }while(x != 'y' && x != 'n');
    return x;
}

int getComputerChoice(){
     return (int(rand()) % (3- 1 + 1)+ 1);
}
int getPlayerChoice(){
    int n;
    do {
        cout <<"Choose Rock [1], Paper[2], Scissors[3]: ";
        cin >> n;
    } while (n < 1 || n > 3);
    return n;
}
string determineChoice(int n) {
    switch(n) {
        case 1: return "rock";
        case 2: return "paper";
        case 3: return "scissors";
    }
}

string checkWinner(string player, string computer) {
    string winner = "";
    
    if (player == computer) {
        winner = "tie";
    }
    else if (player == "rock") {
        if (computer == "scissors") {
            winner = "player";
        }
        else if (computer == "paper") {
            winner = "computer";
        }
    }
    else if (player == "paper") {
        if (computer == "rock") {
            winner = "player";
        }
        else if (computer == "scissors") {
            winner = "computer";
        }
    }
    else if (player == "scissors") {
        if (computer == "paper") {
            winner = "player";
        }
        else if (computer == "rock") {
            winner = "computer";
        }
    }
    
    return winner;
}
void displayScore(int pScore, int cScore) {
    cout <<"Player Score: " << pScore << endl;
    cout <<"Computer Score: " << cScore << endl;
}
void playRound(int& playerCount, int& compCount){
    string playerChoice = determineChoice(getPlayerChoice()); 
    string computerChoice = determineChoice(getComputerChoice()) ;
    cout <<"Player: " << playerChoice << endl;
    cout <<"Computer: " << computerChoice << endl;
    string winner = checkWinner(playerChoice, computerChoice);
    cout << endl;
    cout <<"Winner: " << winner << endl;
    if (winner == "player") {
        playerCount++;
    } else if(winner == "computer"){
        compCount++;
    }
    cout << endl;
    displayScore(playerCount, compCount);
    cout << endl;
}

void displayFinalWinner(int pScore, int cScore) {
    cout <<"-------- GAME OVER --------" << endl;
    cout <<"Player Score: " << pScore << endl;
    cout <<"Computer Score: " << cScore << endl;
    if (pScore > cScore) {
        cout << "Player WON!!" << endl;
    } else if (pScore < cScore) {
        cout <<"Computer WON!! You Lost!" << endl;
    } else {
        cout <<"It's a TIE!" << endl;
    }
}

void playRounds(int n) {
    char choice = 'y';
    do{
        int pScore = 0, cScore = 0;
        for (int i = 1; i <= n; i++) {
            cout <<"Round " << i << endl;
            cout << endl;
            playRound(pScore, cScore);
        }
        displayFinalWinner(pScore, cScore);
        cout << endl;
        choice = inputRestart();
    }while (choice == 'y');
}

void startGame(){
    cout <<"Game Started!" << endl;
    int rounds = inputRounds();
    playRounds(rounds);
}

int main(){
    startGame();
}