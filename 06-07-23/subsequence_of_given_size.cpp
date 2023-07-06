#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(string s,vector<char> op,int i,int k)
{
    if(s[i]=='\0')
    {
        if(op.size()==k)
        {
            for (int i = 0; i < op.size(); i++)
                 {
                 cout<<op[i];
                 }cout<<endl;
        }
        else{
            return ;
        }
        
        return;
    }

    solve(s,op,i+1,k);

    op.push_back(s[i]);
    solve(s,op,i+1,k);
    op.pop_back();

}
int main()
{
    string s;
    cin>>s;
    int k; cin>>k;
    vector<char> op;
    solve(s,op,0,k);
    return 0;
}