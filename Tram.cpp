#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; // Number of test cases or iteration

    int a,b;// Input values for each iteration

    int sum=0,k=0;
    for (int i=0; i<n; i++)
    {
        cin>>a>>b;


        sum=(a+k)-b;// Calculate the new sum as (a + previous leftover k)- b

        if(sum<0)
            k=0;
        else
            k=sum;
    }

    cout<<sum; // After the loop , print the last calculated sum

    return 0;
}
