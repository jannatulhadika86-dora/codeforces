#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;  // Input the string

    string vowels = "aoyeuiAOYEUI";  // All vowels (both lowercase and uppercase)
    string result = "";              // To store the final processed string

    for (char c : s)
    {
        // If the character is NOT a vowel
        if (vowels.find(c) == string::npos)
        {
            // Convert uppercase to lowercase
            if (c >= 'A' && c <= 'Z')
            {
                c = c - 'A' + 'a';
            }
            // Add '.' before consonant and append it
            result += '.';
            result += c;
        }
    }

    // Print the final result
    cout << result << endl;
    return 0;
}
