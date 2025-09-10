#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;   // Input the word Vasya typed

    string hello = "hello"; // The target word we need to check
    int j = 0;  // Pointer for "hello"

    // Go through each character of the typed word
    for (int i = 0; i < s.size(); i++)
    {
        // If current character matches the current character of "hello"
        if (s[i] == hello[j])
        {
            j++;  // Move to the next character in "hello"
        }
        // If we already matched all characters of "hello"
        if (j == hello.size())
        {
            break; // No need to check further
        }
    }

    // If j reached the size of "hello", it means we found all letters in order
    if (j == hello.size())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
