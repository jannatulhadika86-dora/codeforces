#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n;
        cin >> n; // Read size of the multiset S
        vector<int> cnt(51, 0); // Frequency array for numbers 0..50

        // Count occurrences of each number in S
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        // Find the first mex (mex1)
        // Mex is the smallest non-negative integer NOT in S
        int mex1 = 0;
        while (mex1 <= 50 && cnt[mex1] > 0) {
            mex1++; // Increase mex1 until we find a number with 0 occurrences
        }

        // Find the second mex (mex2)
        // For the second mex, we consider numbers that have more than one occurrence
        int mex2 = 0;
        while (mex2 <= 50 && cnt[mex2] > 1) {
            mex2++; // Increase mex2 until we find a number with 0 or 1 occurrence
        }

        // Maximum score = mex1 + mex2
        // This is because we can take two subsets for mex operations to maximize the score
        cout << mex1 + mex2 << endl;
    }

    return 0;
}
