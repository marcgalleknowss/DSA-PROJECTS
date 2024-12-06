#include <iostream>

#include <vector>

#include <string>



using namespace std;



struct Players {

    string pangalan;

    string role;

};



void showplayers(const vector<Players>& players) {

    if (players.empty()) {

        cout << "Tol walang players\n";

        return;

    }

    cout << "List of Volleyball Players:\n";

    for (size_t i = 0; i < players.size(); ++i) {

        cout << i + 1 << ". Name: " << players[i].pangalan << "\n";

        cout << "   Role: " << players[i].role << "\n";

    }

}



void addplayer(vector<Players>& players) {

    Players newPlayer;

    cout << "Enter player's name: ";

    cin.ignore();

    getline(cin, newPlayer.pangalan);

    cout << "Enter player's role: ";

    getline(cin, newPlayer.role);

    players.push_back(newPlayer);

    cout << "Ayos kasali ka na! HAHA\n";

}



void updateplayer(vector<Players>& players) {

    if (players.empty()) {

        cout << "No players to update.\n";

        return;

    }

    showplayers(players);

    int number;

    cout << "Sino babaguhin mo?: ";

    cin >> number;

    if (number < 1 || number > players.size()) {

        cout << "Invalid player number.\n";

        return;

    }

    Players& playerToUpdate = players[number - 1];

    cout << "Pangalan? (Enter kung yun pa rin): ";

    cin.ignore();

    string newPangalan;

    getline(cin, newPangalan);

    if (!newPangalan.empty()) {

        playerToUpdate.pangalan = newPangalan;

    }

    cout << "Role? (Enter kung yun pa rin): ";

    string newRole;

    getline(cin, newRole);

    if (!newRole.empty()) {

        playerToUpdate.role = newRole;

    }

    cout << "Ayos nabago na! HEHEHE\n";

}



void deleteplayer(vector<Players>& players) {

    if (players.empty()) {

        cout << "No players to delete.\n";

        return;

    }

    showplayers(players);

    int number;

    cout << "Alin ang aalisin jan?: ";

    cin >> number;

    if (number < 1 || number > players.size()) {

        cout << "Invalid player number.\n";

        return;

    }

    players.erase(players.begin() + number - 1);

    cout << "Di ka na kasali tol ble!\n";

}



int main() {

    vector<Players> players;

    int choices;



    while (true) {

        cout << "\nPang barangay na liga ni marc HAHA\n";

        cout << "1. Add Player\n";

        cout << "2. View Players\n";

        cout << "3. Update Player\n";

        cout << "4. Delete Player\n";

        cout << "5. Exit\n";

        cout << "Enter your choice: ";

        cin >> choices;



        switch (choices) {

            case 1:

                addplayer(players);

                break;

            case 2:

                showplayers(players);

                break;

            case 3:

                updateplayer(players);

                break;

            case 4:

                deleteplayer(players);

                break;

            case 5:

                cout << "Exiting program...\n";

                return 0;

            default:

                cout << "Invalid choice. Please try again.\n";

        }

    }

}