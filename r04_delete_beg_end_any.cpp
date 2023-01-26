#include<bits/stdc++.h>

using namespace std;

typedef struct Node{
int data;
Node *next;
};
Node *head;
void printList(Node *current)
{
    while(current != NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
}

void create_node(int N)
{
    int first_value,n_val;
    Node *tmp,*n_node;
    cin>>first_value;
    head->data = first_value;
    head->next = NULL;
    tmp = head;
    for(int i=2;i<=N;i++)
    {
        n_node = (Node *)malloc(sizeof(Node));
        cin>>n_val;
        n_node->data = n_val;
        n_node->next = NULL;
        tmp->next = n_node;
        tmp = tmp->next;
    }
}



void delete_beg()
{
    head = head->next;
}

void delete_end()
{
    Node *tmp,*prev;
    tmp = head;
    while(tmp->next != NULL)
    {
        prev = tmp;
        tmp = tmp->next;
    }

    prev->next = NULL;
    cout<<endl;
    printList(head);
}

void delete_any(int val)
{
    Node *tmp,*prev;
    tmp = head;
    while(tmp->next != NULL)
    {
        if(tmp->next->data == val)
        {
             prev = tmp;
             prev->next = tmp->next->next;

        }
        else
        {
            tmp = tmp->next;
        }

    }

    cout<<endl;
    printList(head);
}

int main()
{
    head = (Node *)malloc(sizeof(Node));
    int n;
    cin>>n;
    create_node(n);
    delete_beg();
    cout<<endl;
    cout<<"Delete operation - beginning"<<endl;
    printList(head);

    cout<<endl;
    cout<<"Delete operation - ending"<<endl;
    delete_end();

    cout<<endl;
    cout<<"Delete operation - any"<<endl;
    delete_any(14);


}
