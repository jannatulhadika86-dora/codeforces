#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // number of rooms

    int count = 0; // this will count suitable rooms

    for (int i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q; // p = current people, q = room capacity

        // check if room has at least 2 free places
        if (q - p >= 2) {
            count++; // George and Alex can move in this room
        }
    }

    cout << count; // print the number of suitable rooms
    return 0;
}
