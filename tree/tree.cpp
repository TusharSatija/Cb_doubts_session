#include<iostream>
using namespace std;
class tree{
    public:
    int data;
    tree* left;
    tree* right;

    tree(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

tree *BuildTree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    tree * root=new tree(d);
    root->left=BuildTree();
    root->right=BuildTree();

    return root;
}

void PreOrder(tree *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<"   ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void inOrder(tree *root)
{
    if(root==NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<"   ";
    inOrder(root->right);
}
void PostOrder(tree *root)
{
    if(root==NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<"   ";
}
int main()
{
    tree *root=NULL;
    root=BuildTree();
    cout<<"preorder traversal  "<<endl;
    PreOrder(root);
    cout<<"inorder traversal  "<<endl;
    inOrder(root);
    cout<<"postorder traversal  "<<endl;
    PostOrder(root);
}


