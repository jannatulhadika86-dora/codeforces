#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;  // number of participants and the k-th place

    int scores[55]; // array to store scores (n ≤ 50, so 55 is safe)
    for (int i = 0; i < n; i++) {
        cin >> scores[i]; // input all scores
    }

    int cutoff = scores[k-1]; // the k-th place score (0-based index)

    int count = 0; // how many participants advance
    for (int i = 0; i < n; i++) {
        // A participant advances if:
        // 1. score >= cutoff
        // 2. score > 0
        if (scores[i] >= cutoff && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl; // print result
    return 0;
}
