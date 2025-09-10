
#include <iostream>
using namespace std;

int main()
{
    int n, x, y, z;
    int sum_x = 0, sum_y = 0, sum_z = 0;

    cin >> n; //input
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    // Check if all sums are zero
    cout << ((sum_x == 0 && sum_y == 0 && sum_z == 0) ? "YES" : "NO") << endl;

    return 0;
}
