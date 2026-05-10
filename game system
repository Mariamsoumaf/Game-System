#include <iostream>
using namespace std;

// Linked List
struct Game {
    string player, game;
    Game* next;
};

Game* head = NULL;

// Add game
void addGame() {
    Game* n = new Game();

    cout << "Player: ";
    cin >> n->player;

    cout << "Game: ";
    cin >> n->game;

    n->next = head;
    head = n;

    cout << "Game Added!\n";
}

// View games
void viewGames() {
    Game* t = head;

    if (t == NULL) {
        cout << "No Games Saved!\n";
        return;
    }

    while (t != NULL) {
        cout << t->player << " - " << t->game << endl;
        t = t->next;
    }
}

// Tree
struct Node {
    string text;
    Node* yes;
    Node* no;
};

// Recommend game
void recommend() {

    Node* root = new Node{
        "1.Action  2.Survival",

        new Node{
            "1.Online  2.Offline",
            new Node{"Call of Duty", NULL, NULL},
            new Node{"GTA V", NULL, NULL}
        },

        new Node{
            "1.Building  2.Horror",
            new Node{"Minecraft", NULL, NULL},
            new Node{"Resident Evil", NULL, NULL}
        }
    };

    int x, y;
    Node* next;

    cout << root->text << ": ";
    cin >> x;

    if (x == 1)
        next = root->yes;
    else
        next = root->no;

    cout << next->text << ": ";
    cin >> y;

    if (y == 1)
        cout << "Recommended: " << next->yes->text << endl;
    else
        cout << "Recommended: " << next->no->text << endl;
}

// Main
int main() {

    int c;

    do {

        cout << "\n=== SMART GAME SYSTEM ===\n";
        cout << "1.Recommend Game\n";
        cout << "2.Add Game\n";
        cout << "3.View Games\n";
        cout << "4.Exit\n";
        cout << "Choice: ";

        cin >> c;

        switch(c) {

            case 1:
                recommend();
                break;

            case 2:
                addGame();
                break;

            case 3:
                viewGames();
                break;

            case 4:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid!\n";
        }

    } while(c != 4);

    return 0;
}
