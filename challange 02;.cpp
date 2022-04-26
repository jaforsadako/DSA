//Arrays Challenge-Longest Arithmetic Subarray;https://drive.google.com/drive/folders/1-PNukHSuFB4NsmGI1U4772DBXr3eOoxR


#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans=2;
  int d=arr[1]-arr[0];
  int curr=2;
  int j=2;
  while(j<n)
  { if(arr[j+1]-arr[j]==d)
    {
        curr++;

    }else{ d=arr[j+1]-arr[j];
        curr=2;
        } j++;
      ans=max(ans,curr);
  }
  cout<<ans<<endl;
    return 0;
}
