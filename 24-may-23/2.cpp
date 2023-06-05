#include<iostream>
#include<bits/stdc++.h>
using namespace std;
                                        // size=1
                                        // capacity=1;  
                                        // size=2;
                                        // capacity=2;
                                        // size=3;   3<2
                                        // capacity =4
                                        // size=5;
                                        // capacity=8
int main()
{
    vector<int> v;  
    v.push_back(2);
    v.push_back(3);
    v.push_back(13);
    v.push_back(33);
    v.push_back(36);
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    } 

    cout<<v.begin();
    cout<<v.end();
    


    // v.push_back(12);                   
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;

    // v.push_back(2);

    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    // v.push_back(5);
    // v.pop_back();
    //  cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;

    // v.push_back(6);
    // v.push_back(8);
      
    // cout<<v.capacity();
    // cout<<v.size();

    // int v[]={1,2,3};

    return 0;
}