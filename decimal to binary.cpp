#include<iostream>
using namespace std;




void decimal_to_binary(int n)
{  int i=0;
   int binary_number[32];
   while(n>0)
   {   binary_number[i]=n%2;
       n/=2;
       i++;
   }
   for(int j=i-1;j>=0;j--){

    cout<<binary_number[j];

   }




}
int main()
{
    int n;
    cin>>n;
    decimal_to_binary(n);
    return 0;
}
