#include <iostream>

using namespace std;

int main()
{
   int a, b, c;
   cin>> a >> b>> c;
   int arr[a][b];int arr1[b][c]; int ans[a][c];
   for(int i=0;i<a;i++)
   {
       for(int j=0;j<b;j++)
       {
       cin>>arr[i][j];

       }
   }

   for(int i=0;i<b;i++)
   {
       for(int j=0;j<c;j++)
       {
           cin>>arr1[i][j];

       }
   }
 for(int i=0; i<a; i++)
   {
       for(int j=0; j<c; j++)
        ans[i][j] = 0;

   }




    for(int i=0;i<a;i++)
    {
         for(int j=0;j<c;j++)
         {
              for(int k=0;k<b;k++)
              {
                  ans[i][j]+=arr[i][k]*arr1[k][j];

              }
         }


    }
   for(int i=0;i<a;i++)
   {
       for(int j=0;j<c;j++)

       cout<<ans[i][j]<<" ";
       cout<<endl;
   }


    return 0;
}
