//Arrays Challenge-Record Breaker.https://drive.google.com/drive/folders/1-PNukHSuFB4NsmGI1U4772DBXr3eOoxR






#include <bits/stdc++.h>

using namespace std;

int main()
{ int n;
  cin>>n;
  int arr[n+1];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];

  }

  arr[n]=-1;
  if(n==1)
  {
    cout<<"1"<<endl;
    return 0;
  }
  int sum=0;
  int mx=-1;
  for(int i=0;i<n;i++)
  {
      if(arr[i]>arr[i+1] && arr[i]>mx )
      {

        sum++;
        mx=max(mx,arr[i]);
      }


  }
 cout<<sum<<endl;

    return 0;
}
