#include<iostream>
using namespace std;
void solve(string s,int i)
{
    if(i==s.size())
    {
        cout<<s<<"  ";
        return ;
    }
    for(int j=i;j<s.size();j++)
    {
        swap(s[i],s[j]);
        solve(s,i+1);
       // backtrack  swap(s[i],s[j]);
    }
}
int main()
{
    string s="abcd"; 
    solve(s,0);
    return 0;
}