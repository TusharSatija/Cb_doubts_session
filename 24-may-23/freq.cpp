#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int freq[100000]={0};
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }

    for(int i=0;i<100000;i++)
    {
        while(freq[i]--)
        {
            cout<<i<<"   ";
        }
    }
    return 0;
}