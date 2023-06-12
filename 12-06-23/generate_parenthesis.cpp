#include<iostream>
using namespace std;
void generateParenthesis(string s,int oC,int cC,int n){
	if(cC==n){
		cout<<s<<endl;
		return;
	}
	if(cC<oC){
		generateParenthesis(s+")",oC,cC+1,n);
	}
	if(oC<n){
		generateParenthesis(s+"(",oC+1,cC,n);
	}
}
int main()
{
    int n;
    cin>>n;
    generateParenthesis("",0,0,n);
    return 0;
}