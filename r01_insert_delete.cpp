#include<cstdio>
#include<iostream>
using namespace std;
void insertnum(int a[],int p,int b,int c)
{
    for(int i=p;i>b;i--)
    {
        a[i]=a[i-1];
    }
    a[b]=c;
    for(int i=0;i<=p;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
void deletenum(int a[],int p,int x)
{
    for(int i=0;i<p;i++)
    {
        if(a[i]==x)
        {
            int j=i;
            while(j<p-1)
            {
                a[j]=a[j+1];
                j++;
            }
            i--;
            p--;
        }
    }
    for(int i=0;i<p;i++)cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int p,y;
    cin>>p;
    int a[p+5];
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
    }
    cout<<"Input a number (0=insert 1=delete) ";
    cin>>y;
    switch(y)
    {
        case 0:
        {
            int b,c;
            cin>>b>>c;
            insertnum(a,p,b,c);
            break;
        }
        case 1:
        {
            int x;
            cin>>x;
            deletenum(a,p,x);
            break;
        }
        default:
        {
            cout<<"not found"<<endl;
        }
    }
    return 0;
}



