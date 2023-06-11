//decrement
#include<iostream>
using namespace std;
void Print_digits(int n)
{
    if(n<0)
    { 
        return ;
    }
    cout<<n<<"   ";
    Print_digits(n-1);
}
int main()
{
    int n;
    cin>>n;
    Print_digits(n);
    return 0;
}


//increment
#include<iostream>
using namespace std;
void Print_digits(int n)
{
    if(n<0)
    { 
        return ;
    }
    Print_digits(n-1);
    cout<<n<<"   ";
}
int main()
{
    int n;
    cin>>n;
    Print_digits(n);
    return 0;
}

//incement
/*#include<iostream>
using namespace std;
void Print_digits(int n,int i)
{
    if(i>n)
    { 
        return ;
    }
    cout<<i<<"   ";
    Print_digits(n,i+1);

}
int main()
{
    int n;
    cin>>n;
    Print_digits(n,0);
    return 0;
}*/