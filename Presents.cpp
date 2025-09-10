#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;  // number of friends

    int p[101];     // array to store who gave gift to whom
    int giver[101]; // array to store result: who gave gift to i

    // Input: friend i received a gift from friend p[i]
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        // p[i] means: friend i received gift from friend p[i]
        // So we store: friend p[i] gave a gift to friend i
        giver[p[i]] = i;
    }

    // Output: for each friend, who gave them gift
    for (int i = 1; i <= n; i++)
    {
        cout << giver[i] << " ";
    }

    return 0;
}

