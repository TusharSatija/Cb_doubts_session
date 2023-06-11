#include<iostream>
using namespace std;
int solve(int * arr, int key, int start, int end){
	 
	if(start > end) return -1;
	 
	int mid = (start + end)/2;
	if(arr[mid] == key) return mid;
	 
	if(arr[mid] < key){
		return solve(arr, key, mid+1, end);
	}else{
		return solve(arr, key, start, mid-1);
	}
}


// int  solve(int *a,int key,int s,int e)
// {
//     while (s<=e)
//     {
//         int mid=(s+e)/2;
//         if(key==a[mid])
//         {
//             return mid;
//         }
//         if(key>mid)
//         {
//             s=mid+1;
//         }
//         else
//         {
//             e=mid-1;
//         }
//     } 
//     return -1;
// }

int main()
{ 
    int n,s=0,e=n-1;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int key; cin>>key;
    cout<<solve(a,key,s,e);

    return 0;
}