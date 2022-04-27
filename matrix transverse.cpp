#include <iostream>

using namespace std;
// int arr[3][3]={{1,2,3},{4 ,5,6},{7 ,8, 9}};
int main()
{
    int row, column;
    cin>>row>>column;
    int arr[row][column];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
        cin>>arr[i][j];

        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=i;j<column;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }

    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
