#include<iostream>
using namespace std;
void solve(string s,int i,string op)
{
    if(i==s.size())
    {
        cout<<op<<" ";
        return ;
    }
    //not take
    solve(s,i+1,op);

    //take;
    op=op+s[i];
    solve(s,i+1,op);
}
int main()
{
    string op="";
    string s="abc"; 
    solve(s,0,op);
    return 0;
}