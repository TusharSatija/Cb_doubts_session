#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getSumOfRecords(char arr[],int n){
	stack<int> s;
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]!='+' && arr[i]!='C' && arr[i]!='D'){
            int data=arr[i]-'0';
            cout<<"data   ---->   "<<data<<endl;
			s.push(arr[i]-'0');
		}
		else if(arr[i]=='D'){
			s.push(s.top()*2);
		}
		else if(arr[i]=='C'){
			s.pop();
		}
		else{
			int temp=s.top();
			s.pop();
			int newEntry = s.top()+temp;
			s.push(temp);
			s.push(newEntry);
		}
	}

	while(!s.empty()){
		sum+=s.top();
		s.pop();
	}
	return sum;
}
int main () {
	int k;
	cin>>k;
	while(k--){
		int n;
		cin>>n;
		char arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<getSumOfRecords(arr,n)<<endl;
	}
	return 0;
}