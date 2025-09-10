#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;           // Number of games played
    string s;        // String to store the outcomes of the games

    cin >> n >> s;   // Read input: n and the string s

    int anton_wins = 0; // Counter for games won by Anton
    int danik_wins = 0; // Counter for games won by Danik

    // Loop through each character in the string to count wins
    for (char c : s) {
        if (c == 'A')        // If Anton won this game
            anton_wins++;    // Increment Anton's win counter
        else if (c == 'D')   // If Danik won this game
            danik_wins++;    // Increment Danik's win counter
    }

    // Compare the counts to determine the winner
    if (anton_wins > danik_wins)
        cout << "Anton" << endl;       // Anton won more games
    else if (danik_wins > anton_wins)
        cout << "Danik" << endl;       // Danik won more games
    else
        cout << "Friendship" << endl;  // Both won the same number of games

    return 0; // End of program
}
