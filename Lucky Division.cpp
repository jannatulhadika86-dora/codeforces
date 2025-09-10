
#include <iostream>
using namespace std;

int main() {
    long long n;   // using long long because n can be up to 10^15
    cin >> n;

    // If n is even, the sum is simply n/2
    // If n is odd, the sum is -(n+1)/2
    if (n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        cout << -(n + 1) / 2 << endl;
    }

    return 0;
}
