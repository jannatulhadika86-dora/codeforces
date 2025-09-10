#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b; // read the two strings

    // Convert all characters in string 'a' to lowercase
    for (int i = 0; i < a.size(); i++)
        a[i] = tolower(a[i]);

    // Convert all characters in string 'b' to lowercase
    for (int i = 0; i < b.size(); i++)
        b[i] = tolower(b[i]);

    // Compare the two strings lexicographically
    if (a < b) cout << -1;   // first string is smaller
    else if (a > b) cout << 1; // first string is larger
    else cout << 0;           // strings are equal

    return 0;
}

