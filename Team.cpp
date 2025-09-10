#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // number of problems

    int count = 0; // to couunt how many problems they will solve

    for(int i =0; i<n; i++)
    {
        int a,b,c;
        cin >> a >> b >> c; //read Petya, Vasya, Tonyas's confidence

        //If at least 2 friends are sure , they solve the problem

        if(a+b+c>=2)
        {
            count++;
        }
    }
    cout << count << endl; // print result
    return 0;
}
