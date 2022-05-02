#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str="87239998712";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str;



    return 0;
}
