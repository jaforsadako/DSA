#include<bits/stdc++.h>

using namespace std;

int hexadecimal_to_deciaml(string n){

int ans=0,i;
int x=1;
int y=n.size();
for(i=y-1;i>=0;i--){

    if(n[i]>='0' && n[i]<='9'){

        ans+=x*(n[i]-'0');



    }else if(n[i]>='A' && n[i]<='F'){
     ans+=x*(n[i]-'A'+10);

    }
    x*=16;

}
return ans;


}






   int32_t main(){

   string n;
   cin>>n;
   cout<<hexadecimal_to_deciaml(n);



   }
