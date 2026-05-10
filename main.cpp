#include <iostream>
#include <string>
using namespace std;

// ======= LINKED LIST =======
struct Game {
    string player;
    string game;
    Game* next;
    Game(string p, string g) {
        player = p;
        game = g;
        next = NULL;
    }
};

Game* head = NULL;

void addGame() {
    string p, g;
    cout << "Player name: ";
    cin >> p;
    cout << "Game name: ";
    cin >> g;
    Game* newGame = new Game(p, g);
    newGame->next = head;
    head = newGame;
    cout << "Game added!" << endl;
}

void viewGames() {
    if (head == NULL) {
        cout << "No games saved!" << endl;
        return;
    }
    Game* temp = head;
    int i = 1;
    while (temp != NULL) {
        cout << i << ". " << temp->player << " -> " << temp->game << endl;
        temp = temp->next;
        i++;
    }
}

// ======= TREE =======
void recommendGame() {
    int choice;
    cout << "\n1. Action  2. Survival" << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "1. Online  2. Offline" << endl;
        cout << "Choice: ";
        cin >> choice;
        if (choice == 1)
            cout << "Recommended: Call of Duty!" << endl;
        else
            cout << "Recommended: GTA V!" << endl;
    } else {
        cout << "1. Building  2. Horror" << endl;
        cout << "Choice: ";
        cin >> choice;
        if (choice == 1)
            cout << "Recommended: Minecraft!" << endl;
        else
            cout << "Recommended: Resident Evil!" << endl;
    }
}

// ======= MAIN =======
int main() {
    int choice;

    cout << "==============================" << endl;
    cout << "      SMART GAME SYSTEM       " << endl;
    cout << "   Using Tree + Linked List   " << endl;
    cout << "==============================" << endl;

    do {
        cout << "\n1. Recommend Game" << endl;
        cout << "2. Add Favorite Game" << endl;
        cout << "3. View Saved Games" << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch(choice) {
            case 1: recommendGame(); break;
            case 2: addGame(); break;
            case 3: viewGames(); break;
            case 4: cout << "Goodbye!" << endl; break;
            default: cout << "Invalid!" << endl;
        }
    } while (choice != 4);

    return 0;
}
