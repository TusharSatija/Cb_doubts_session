#include<iostream>
using namespace std;
void solve(int n,int *a,int i,int target)
{
    if(i>n)
    {
        return;
    }
    if(target==a[i])
    {
        cout<<i<<"   ";
    }
    solve(n,a,i+1,target);
}
int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     int target; cin>>target;
     solve(n-1,a,0,target);
    return 0;
}