#include<iostream>
using namespace std;
int main()
{
    string word;
    cin >> word;

    //Capitalize the first letter directly
    if(word[0]>='a' && word[0]<='z')
    {
        word[0]=word[0]-'a'+ 'A';

    }
    cout << word << endl;
    return 0;
}
