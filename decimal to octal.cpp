#include <iostream>

using namespace std;
void decimal_to_octal(int n)
{
   int i=0;
   int decimal_number[32];
   while(n>0)
   {
       decimal_number[i]=n%8;
       n/=8;
       i++;

   }
    for(int
        j=i-1;j>=0;j--)
    {

        cout<<decimal_number[j];

    }
}
int main()
{
   int n;
   cin>>n;
   decimal_to_octal(n);
    return 0;
}
