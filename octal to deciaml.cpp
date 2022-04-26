#include<bits/stdc++.h>
using namespace std;
int octal_to_decimal(int n){
int x=1;
int ans=0;
while (n>0){

    int y=n%10;
    ans+=x*y;
    x*=8;
    n/=10;



}
return ans;



}









int32_t main(){

int n;
cin>>n;
cout<<octal_to_decimal(n);




}
