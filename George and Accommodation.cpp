#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // read number of magnets

    string magnet, prev;
    int groups = 0;  // to count groups of magnets

    for (int i = 0; i < n; i++) {
        cin >> magnet;  // read the current magnet ("01" or "10")

        // If it's the first magnet, or different from the previous one,
        // then a new group starts
        if (i == 0 || magnet != prev) {
            groups++;
        }

        // update the previous magnet for next comparison
        prev = magnet;
    }

    cout << groups << endl;  // print total groups
    return 0;
}
