#include<iostream>
using namespace std;
int main()
{
    long long n;// number can be large(up to 1e9)
    int k;  // number of operations
    cin >> n >>k;

    for(int i =0 ; i<k; i++)
    {
        if(n%10!=0)
        {
            n-=1; // decrease by 1
        }
        else
        {
            n/=10;//remove last digit
        }
    }
    cout << n << endl;
    return 0;
}
