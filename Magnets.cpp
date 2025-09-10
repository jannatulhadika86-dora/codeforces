#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Take input number n

    // List of lucky numbers up to 1000 (since n ≤ 1000)
    int luckyNumbers[] = {4, 7, 44, 47, 74, 77,
                          444, 447, 474, 477,
                          744, 747, 774, 777};

    bool isAlmostLucky = false; // Assume not almost lucky at first

    // Check if n is divisible by any lucky number
    for (int i = 0; i < 14; i++) {
        if (n % luckyNumbers[i] == 0) {
            isAlmostLucky = true; // Found a lucky divisor
            break; // No need to check further
        }
    }

    // Print result
    if (isAlmostLucky)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
