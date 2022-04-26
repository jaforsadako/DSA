#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {

    cin>>arr[i];
   }
   for(int i=0;i<n;i++)
     {
         int currSum=0;
         for(int j=i;j<n;j++)
         {
             currSum+=arr[j];
             cout<<currSum<<endl;

         }

     }

    return 0;
}
