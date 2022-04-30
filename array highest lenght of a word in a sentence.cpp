#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
int i=0;int maxlen=0;int currlen=0;
int st=0,maxst=0;

while(1)
{
    if(arr[i]==' ' || arr[i]=='\0')
    {if(currlen > maxlen)
        {
            maxlen=currlen;
            maxst=st;

        }
        currlen=0;
            st=i+1;


    }else
    currlen++;
    if(arr[i]=='\0')
            break;
    i++;



}
    cout<<maxlen<<endl;
    for(int i=0; i<maxlen; i++)
    {
        cout<<arr[i+maxst];

    }


    return 0;
}

/*#include <iostream>
#include <string>

using namespace std;

int main()
{
string s;
getline(cin , s) ; //#input of string from user
int counter = 0;
int max_word = -1;
int len = s.length();//#length of string
string max = " ";
string counter_word = " ";

for (int i = 0; i < len; i++)
{
    if(s[i] != ' ')
        {
        counter++;
        }

    if(s[i] == ' ' || i == len - 1)
    {
        if(counter > max_word)
            {
            max_word = counter;
                        //handling end of string.
            if(i == len - 1)
                            max = s.substr(i + 1 - max_word, max_word); #sub string command that prints the longest word
                        else
                max = s.substr(i - max_word, max_word);
                }

    counter = 0;
    }
}
cout << max_word << " " << max << endl; #output
return 0;
}*/
