#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(string s,int i,set<string> &v)
{
    if(s[i]=='\0')
    {
        v.insert(s);
        return;
    }
    for(int k=i;s[k]!='\0';k++)
    {
        swap(s[k],s[i]);
        solve(s,i+1,v);
    }
}
int main()
{
    string s;
    cin>>s;
    set<string> v;
    solve(s,0,v); 
    for(auto x: v)
    {
        cout<<x<<endl;
    }
     
    return 0;
}