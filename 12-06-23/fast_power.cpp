#include<iostream>
using namespace std;
long long int  solve(int a,int n)
{
    long long int ans=1;
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        ans*=solve(a*a,n/2);
    }
    else{
        ans*=a*solve(a,n-1);
    }
    return  ans;
}
int main()
{
    int a;
    cin>>a;
    int p; cin>>p;
    cout<<solve(a,p);
    return 0;
}