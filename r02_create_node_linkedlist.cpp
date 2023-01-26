#include<bits/stdc++.h>
using namespace std;
typedef struct node{
int data;
struct node *next;
};
void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void create_node(int N,node *head)
{
    int first_value,n_val;
    node *temp,*n_node;
    cin>>first_value;
    head->data=first_value;
    head->next=NULL;

    temp=head;
    for(int i=2;i<=N;i++)
    {
        n_node=(node *)malloc(sizeof(node));
        cin>>n_val;
        n_node->data=n_val;
        n_node->next=NULL;
        temp->next=n_node;
        temp=temp->next;
    }
    printlist(head);

}
int main()
{
    node *head;
    head=(node *)malloc(sizeof(node));
    int n;
    cin>>n;
    create_node(n,head);
}

