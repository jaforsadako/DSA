#include<iostream>
using namespace std;
void hexadecimal_to_decimal(int n)
{
   int i=0;
   char hexadecimal_number[100];
   while(n!=0)
   {
       int temp=0;
       temp=n%16;
       if(temp<10)
       {
           hexadecimal_number[i]=temp+48;
           i++;


       }else hexadecimal_number[i]=temp+55;
             i++;
    n/=16;

   }
   for(int j=i-1;j>=0;j--)
   {
       cout<<hexadecimal_number[j];
   }
      cout<<endl;
}
int main()
{

    int n;
    cin>>n;
    hexadecimal_to_decimal(n);

    return 0;
}
