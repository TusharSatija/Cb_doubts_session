#include<iostream>
using namespace std;
int main()
{
     string s;
     cin>>s;
     //s="1[.]1[.]1[.]1[.]1"
     string t="";
     for(int i=0;s[i]!='\0';i++)
     {
        if(s[i]=='.')
        {
            t+="[.]";
        }
        else
        {
            t+=s[i];
        }
     }
     cout<<t;

    return 0;
}