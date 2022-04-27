#include <iostream>

using namespace std;

int main()
{
    int row,colmun;
    cin>>row>>colmun;
    int arr[row][colmun];
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<colmun;j++)
     {

         cin>>arr[i][j];
     }

    }

      cout<<"\nYour matrix is\n"<<endl;
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<colmun;j++)
     {

         cout<<arr[i][j]<<" ";
     }
        cout<<endl;
    }
    return 0;
}
