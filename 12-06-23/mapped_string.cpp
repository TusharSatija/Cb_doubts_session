#include<iostream>
using namespace std;
void solve(string s,string op,int i,string map)
{
    if(s[i]=='\0')
    {
        cout<<op<<endl;
        return ;
    }
    int digit=s[i]-'0';
    solve(s,op+map[digit],i+1,map);

    if(i<s.size()-1)
    {   
        int d=(s[i]-'0')*10+s[i+1]-'0';
        if(d<=26)
        {
            solve(s,op+map[d],i+2,map);
        }
    }
}
int main()
{
    string map=" ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;   
    cin>>s; 
    solve(s,"",0,map);
    return 0;
}