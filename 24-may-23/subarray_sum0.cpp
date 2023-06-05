#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int prefix[n];
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            prefix[i]=a[i];
        }
        else
        {
            prefix[i]=prefix[i-1]+a[i];
        }
    }
    int freq[100000]={0};
    for (int i = 0; i < n; i++)
    {
        freq[prefix[i]]++;
    }
    int flag=0;
    for(int i=0;i<100000;i++)
    {
        if(freq[i]>1)
        {
            flag=1;
        }
    }
    flag==1?cout<<" yes subarry have sum 0 ":cout<<" no subarray have not sum 0"; 



    return 0;
}