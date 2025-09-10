
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // Input number of people asked

    int opinion;
    bool hard = false;  // A flag to check if anyone says "hard"

    // Loop through all people's opinions
    for (int i = 0; i < n; i++) {
        cin >> opinion;  // Take each person's opinion (0 = easy, 1 = hard)
        if (opinion == 1) { // If anyone thinks the problem is hard
            hard = true;   // Mark flag as hard
        }
    }

    // Final decision
    if (hard) {
        cout << "HARD";   // If at least one said hard
    } else {
        cout << "EASY";   // If all said easy
    }

    return 0;
}
