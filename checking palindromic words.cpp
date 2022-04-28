#include <iostream>

using namespace std;

int main()
{int n;
cin>>n;
char arr[n+1];
cin >>arr;
bool check=0;
for(int i=0;i<n;i++)
{
    if(arr[i]!=arr[n-1-i])
        check=1;
        break;
}
if(check)
    cout<<"THis word is not a palindromic\n";
else cout<<"THis word is  a palindromic\n";
    return 0;
}
