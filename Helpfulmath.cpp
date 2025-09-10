#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int years = 0;
    while(a<=b)     //loop until Limak is heavier
    {

        a*=3;        // Limak triples his weight
        b*=2;        // Bob doubles his weight

        years++;   // count the year
    }
    cout << years << endl; //print number of years
    return 0;
}
