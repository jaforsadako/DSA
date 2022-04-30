#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   /* string str;
    cin>>str;
    cout<<str<<"\n";
    string str1(8,'j');
    cout<<str1<<endl;
   string str2="who says";
   cout <<"\n"<<str2;*/




   /* string str3;
   getline(cin,str3);
   cout<<"\n"<<str3<<endl;
      return 0;  // withoyt getline function it would print i=only first chracters
  */


 // append/ concatenation
 /* string str4="jaf";
 string str5="or";
 str4.append(str5);  // str4=str4+str5;   cout<<str4;
 cout<< str4<<endl;
*/

// finding particular chracter

/*string str6;
cin>>str6;
cout <<str6[03];
*/

//clear() function

/*
string str7="dbajkhdaihfda";
str7.clear();
if (str7.empty())
        cout<<str7<<"this is empty";
if (!str7.empty())
    return 0;
*/


// compare
/*
string str8="abc";
string str9="xyz";
cout<<str9.compare(str8);
*/

/*
string str10="abc";
string str11="abc";
if(str10.compare(str11)==0)
    cout<<"Strings are equal";
*/

// string library function
/*
string str12;
cin>>str12;
str12.erase(3,5);
cout<< str12<<"\n";

cout<< str12.find("or");
cout<<"\n"<<str12.insert(3,"jafor")<<"\n";
cout<<str12.size()<<"\n";
cout<<str12.length()<<"\n";
int i;
for( i=0;i<str12.length();i++)
    cout<<str12[i]<<endl;


 cout<<str12.substr(6,4);
*/
//string to int

/*
string str13;

cin >>str13;
int x= stoi(str13);
cout<<x+2;
*/

// int to str

/*
int x=2312;
cout<<to_string(x)+"242";
*/
//sorting string lexicographically and algorithm header file
string str15="gcfdxzsds";
sort(str15.begin(),str15.end());
cout<<str15;







return 0;


}
