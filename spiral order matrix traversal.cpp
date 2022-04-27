#include <iostream>

using namespace std;

int main()
{
    int row, colmun;
    cin>>row>>colmun;
    int arr[row][colmun];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colmun;j++)
            cin>>arr[i][j];
    }

    int row_start=0, row_end= row-1, colmun_start=0, colmun_end=colmun-1;

    while(row_start <= row_end  && colmun_start <= colmun_end)
            {
                // row start
                for(int p=colmun_start; p<=colmun_end; p++)
                {
                    cout<<arr[row_start][p]<<" ";
                }
                    row_start++;
                //  colmun end
                for(int k=row_start; k<=row_end; k++)
                {
                    cout<<arr[k][colmun_end]<<" ";
                }
                    colmun_end--;
                //  row end
                for(int p=colmun_end; p>=colmun_start; p--)
                {
                    cout<<arr[row_end][p]<<" ";
                }
                    row_end--;
                //  colmun start
                for(int k=row_end; k>=row_start; k--)
                {
                    cout<<arr[k][colmun_start]<<" ";
                }
                    colmun_start++;







            }


    return 0;
}
