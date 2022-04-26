#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    bool flag =true;
    for(i=2;i<n;i++){
     if (n%i==0){
        flag=false;
        break;
     }
    }
      if(n<=1){
        flag=false;
        }



     if(flag){

        cout<<"this is a prime number\n"<<endl;

       }else cout<<"this is not a prime number\n";


    return 0;
}
