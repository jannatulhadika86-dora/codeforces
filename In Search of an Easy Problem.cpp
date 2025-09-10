
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;   // n = number of children, t = seconds
    string s;
    cin >> s;        // initial queue arrangement (B = boy, G = girl)

    // Repeat the process for t seconds
    for (int time = 0; time < t; time++) {
        // Go through the queue from left to right
        for (int i = 0; i < n - 1; i++) {
            // If a boy is in front of a girl, swap them
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);  // exchange their positions
                i++; // skip the next index to avoid double swapping in the same second
            }
        }
    }

    cout << s; // print final arrangement after t seconds
    return 0;
}
