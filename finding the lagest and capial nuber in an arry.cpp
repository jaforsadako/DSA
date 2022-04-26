#include <iostream>
#include <climits>
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
   int maxNo=INT_MIN;
   int minNo=INT_MAX;
   for(int i=0;i<n;i++)
   {
       if(arr[i]>maxNo)  //maxNo=max(maxNo,arr[i]
       {
        maxNo=arr[i];
       } if(arr[i]<minNo) //minNo=min(minNo,arr[i]
       {
           minNo=arr[i];

       }



   }
     cout<<maxNo<<" "<<minNo<<" "<<endl;
    return 0;
}
