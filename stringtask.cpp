#include<iostream>
using namespace std;
int main()
{
    int k,w;
    long long n;
    cin >> k >> n >> w; // input

    long long total = 1LL *k* w*(w+1)/2;

    //calculate how much the soldier needs to borrow
    long long borrow = total - n;


    //if the soldier already has enough money , no borrowing needed
    if(borrow <0) borrow = 0;


    //output the answer
    cout << borrow << endl;
    return 0;
}
