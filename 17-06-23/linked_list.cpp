#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
    node()
    { 

    }
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

void insertAtHead(node *&head,int d)
{
    node * n1=new node(d);
    n1->next=head;
    head=n1;
}

void Print_LL(node *head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"--->";
        temp=temp->next;
    }
    cout<<"NULL";
}

void InsertAtTail(node *&head,int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return ;
    }
    node * temp1=head;
    while (temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=new node(d);
}

void insertAtAnyPoation(node *&head,int pos,int d,int t)
{
    node * temp=head;
    if(pos==1)
    {
        insertAtHead(head,d);
    }
    else if(pos>t)
    { 
        InsertAtTail(head,d);
    }
    else
    {
        while(--pos)
        {
            temp=temp->next;
        }
        node* t1=temp->next;
        node *n1=new node(d);
        temp->next=n1;
        n1->next=t1;
    }
}

void delete_end(node *&head)
{
    if(head==NULL  or head->next==NULL)
    {
        cout<<"NULL";
        return ;
    }
    node *temp1=head;
    node*temp2=head->next;
    while (temp2->next!=NULL)
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    delete temp2;
    temp1->next=NULL;    
}

void delete_from_begin(node *&head)
{
    if(head==NULL  or head->next==NULL)
    {
        cout<<"NULL";
        return ;
    }
    head=head->next;
}

void deleteAtAnyPostion(node *&head,int pos,int t)
{
    if(pos==1)
    {
        delete_from_begin(head);
    }
    else if(pos>t)
    {
        delete_end(head);
    }
    else{
      node* temp=head;
        while (--pos)
        {
            temp=temp->next;
        }
        node* t1=temp->next;
        temp->next=temp->next->next;
        delete t1;        
    }
}


int MidPoint(node *head,int t)
{
    int n=t/2;
    while (n--)
    {
        head=head->next;
    }
    return head->data;
}

int main()
{
    node* head=NULL;
    int n;
    cin>>n;
    int t=n;
    while (n--)
    {
        int d;
        cin>>d;
        InsertAtTail(head,d);
        // insertAtHead(head,d);
    }
    // int pos;
    // cin>>pos;
    // int m; cin>>m;
    // insertAtAnyPoation(head,pos,m,t);
    // Print_LL(head);
    // delete_end(head);

    // delete_from_begin(head);

    // int pos; cin>>pos;
    // deleteAtAnyPostion(head,pos,t);
    cout<<MidPoint(head,t);
    Print_LL(head);
    
    return 0;
}
