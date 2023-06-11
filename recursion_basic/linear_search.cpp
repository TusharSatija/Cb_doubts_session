#include<iostream>
using namespace std;
int solve(int *a,int i,int n,int key)
{
    if(i>n)
    {
        return -1;
    }
    if(key==a[i])
    {
        return i;
    }
    return solve(a,i+1,n,key);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int key; cin>>key;
    cout<<solve(a,0,n-1,key);
    return 0;
}