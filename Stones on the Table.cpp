#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

//Minimum number of steps
    int steps = x/5;   // number of full 5-steps
    if(x%5!=0)         //if the number is a reminder
    {
        steps +=1;
    }
    cout << steps << endl;
    return 0;
}
