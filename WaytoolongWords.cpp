#include<iostream>
#include<string> //for string funtions
using namespace std;

int main()
{
    int n;
    cin >> n; // number of words

    while(n--)
    {
        string word;
        cin >> word; // read each word

        // if word length is more than 10
        if(word.length()>10)
        {
            // abbreviation: first letter + (length - 2) + last letter
            cout << word [0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
        else
        {
            //otherwise print the word as it is
            cout << word << endl;
        }
    }
    return 0;
}
