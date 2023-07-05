#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    string temp="";
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')
        {
            count++;
            if(count>1)
                temp+=s[i];   
        }
        else{
            count--;
            if(count>0)
            {
             temp+=s[i];   
            }
        }
    }
    cout<<temp;
    return 0;
}