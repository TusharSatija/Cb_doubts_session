#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node* right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node* root=new node(d); 
    root->left=buildTree(); 
    root->right=buildTree();
    return root;
}
void printrightpart(node* root)
{
    if(root==NULL or  (root->left ==NULL  and root->right==NULL))
    {
        return;
    }
    if(root->right)
        printrightpart(root->right);
    else
        printrightpart(root->left);
    cout<<root->data<<"   ";
}

void printLeftpart(node* root)
{
    if(root==NULL or  (root->left ==NULL  and root->right==NULL))
    {
        return;
    }
    cout<<root->data<<"  ";
    if(root->left)
        printLeftpart(root->left);
    else
        printLeftpart(root->right);
}
void printallLeaf(node *root)
{
    if(root==NULL)
        return ;
    if(root->left==NULL and root->right==NULL)
    {
        cout<<root->data<<"  ";
    }
    printallLeaf(root->left);
    printallLeaf(root->right);
}
void boundary(node *root)
{
    if(root==NULL)
        return ;
    cout<<root->data;
    printLeftpart(root->left);
    printallLeaf(root);
    printrightpart(root->right);
}

int main()
{
    node* r1=buildTree();
    cout<<endl; 
    boundary(r1);  
    
 
    return 0;
}