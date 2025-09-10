#include<iostream>
using namespace std;
int main()
{

    int matrix[5][5];
    int row, col;

    //Input the 5*5 matrix
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> matrix[i][j];
            {
                if(matrix[i][j]);
                        row = i+1; // convert to 1-based index
                        col = j+1; // convert to 1-based index

            }
    }
}
//The center is at (3,3)
int moves = abs(row - 3)+abs(col - 3);
    cout << moves << endl;
    return 0;
}



