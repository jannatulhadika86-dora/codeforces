#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b; //read two string

    //Convert both strings to lowercase

    for(int i = 0; i<a.size(); i++)a[i]= tolower(a[i]);

    for(int i = 0; i<b.size(); i++)a[i]= tolower(b[i]);

//compare strings
    if(a<b)cout << -1;
    else if (a>b) cout << 1;
    else cout << 0;
    return 0;
}
