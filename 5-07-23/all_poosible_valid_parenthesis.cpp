#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int no_of_invalid_par(string s)
{
    stack<char> stk;
    for(int i=0;s[i]!='\0';i++)
    {
        if(!stk.empty() and stk.top()=='(' and s[i]==')')
        {
         stk.pop();
        }
        else{
            stk.push(s[i]);
        }
    }
   return stk.size();
}
void  solve(string s,int size,set<string> &vals)
{
    int n=s.size();

    if(size<0)
    {
        return;
    }
    if(size==0)
    {
         if(!no_of_invalid_par(s))
            vals.insert(s);
            return;
    }
    for(int i = 0; i<s.size(); i++)
    {
        string start=s.substr(0,i); 
        string end=s.substr(i+1); 
        solve(start+end,size-1,vals);
    }
    return;

}

int main()
{
    string s;
    cin>>s;
    set<string> vals;
    int size=no_of_invalid_par(s);
    cout<<size<<endl;
    solve(s,size,vals);
    for(auto &x: vals)
    {
        cout<<x<<endl;
    }
    return  0;
}