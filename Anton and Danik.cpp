#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;// input

    bool ok = true;
    for(int i=0; i<s.size(); i++)
    {
        if (s[i]!=t[s.size()-1-i])
        {
            ok = false;
            break;
        }
    }
    cout << (ok?"YES" : "NO") << endl;
    return 0;
}

