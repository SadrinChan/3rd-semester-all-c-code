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
    //printList(head);
}

void insert_begin(int val)
{
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    printList(head);
}

void insert_end(int val)
{
    Node *newNode,*tmp;
    tmp = head;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    printList(head);
}

void insert_any(int val, int loc)
{
    Node *newNode,*tmp;
    int flag = 0;
    tmp = head;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    //newNode->next = NULL;
    while(tmp->next != NULL)
    {
        if(tmp->data == loc)
        {
            flag = 1;
            break;
        }
        else
        tmp = tmp->next;
    }

    if(flag == 0)
        cout<<"Element not found!"<<endl;
    else
    {
        newNode->next = tmp->next;
        tmp->next = newNode;
        printList(head);
    }


}
int main()
{
    head = (Node *)malloc(sizeof(Node));
    int n;
    cin>>n;
    create_node(n);
    cout<<endl;
    cout<<"Insertion at beginning"<<endl;
    insert_begin(60);
    cout<<endl;
    cout<<"Insertion at end"<<endl;
    insert_end(100);
    cout<<endl;
    cout<<"Insertion at any location"<<endl;
    insert_any(200,20);




}
