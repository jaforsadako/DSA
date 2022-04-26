#include <iostream>

using namespace std;

int main()
{
    int i,j,n,k;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){

            cout<<"  ";
        }
        k=i;
for(;j<=n;j++){
   cout<<k--<<" ";


}
k=1;
for(;j<n+i;j++){

   cout<<k++<<" ";


}

cout<<endl;




    }
    return 0;
}
