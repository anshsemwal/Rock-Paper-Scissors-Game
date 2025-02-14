#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getChoice(int num) {
    if (num == 1) return "Rock";
    if (num == 2) return "Paper";
    if (num == 3) return "Scissors";
    return "Invalid";
}

int main() {
    srand(time(0));
    int userChoice, compChoice;

    cout << "Choose: 1. Rock 2. Paper 3. Scissors\nEnter your choice: ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice!\n";
        return 1;
    }

    compChoice = (rand() % 3) + 1;

    cout << "You chose: " << getChoice(userChoice) << endl;
    cout << "Computer chose: " << getChoice(compChoice) << endl;

    if (userChoice == compChoice)
        cout << "It's a tie!\n";
    else if ((userChoice == 1 && compChoice == 3) || 
             (userChoice == 2 && compChoice == 1) || 
             (userChoice == 3 && compChoice == 2))
        cout << "You win!\n";
    else
        cout << "Computer wins!\n";

    return 0;
}
