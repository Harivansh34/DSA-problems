#include<iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int row;
    int col;
    int moves;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];  // Value input using for loop

            if(arr[i][j]==1)
            {
                row=i;       // Chenk where we should found 1 at which (row, col)
                col=j;
            }                // Store (i,j) inside variable (row, col)

             moves=abs(row-2)+ abs(col-2);  // Check distance from (2,2) to where we found 1
        }
    }
    cout<<moves;
}
