#include <iostream>

using namespace std;
int fact(int n)
{ int factorail=1;
  for(int i=2; i<=n; i++)
  {
      factorail*=i;


  }


  return factorail;




}


int main()
{
    int n,r;
    cin>>n>>r;
    double ans=fact(n)/(fact(n-r)*fact(r));
    cout<<ans<<endl;
    return 0;
}
