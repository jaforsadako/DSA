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

    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<colmun;j++)
     {   if(arr[i][j] ==x)
     {


         cout<<i<<j<<endl;
         flag= true;
     }
     }
    }

    if(flag){
        cout<<"\nthe element is found"<<endl;
    }else

        cout<<"\nthe element is not found"<<endl;



    return 0;
}
