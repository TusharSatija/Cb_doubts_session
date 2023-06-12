#include<iostream>
using namespace std;

void replace_all_pi(string &s,char *op,int i,int j)
{
	 if(s[i]=='\0') 
     {
        op[j]='\0';
        cout<<op<<endl;
        return ;
     }
     if(s[i]=='p' and s[i+1]=='i')
     {
        op[j]='3';
        op[j+1]='.';
        op[j+2]='1';
        op[j+3]='4';
        replace_all_pi(s,op,i+2,j+4);
     }
     else
     {
        op[j]=s[i];
        replace_all_pi(s,op,i+1,j+1);
     }
}

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++) 
	{
		string str;
		cin>>str;
		char op[1000];
		replace_all_pi(str,op,0,0);
	}
	return 0;
}