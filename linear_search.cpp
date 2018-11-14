#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    int v,i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number to be searched"<<endl;
    cin>>v;
    for(i=0;i<n;i++)
    {
        if(a[i]==v)
        {
            cout<<"Element found at "<<i+1<<" position";
            break;
        }
    }
    if(n==i)
    {
        cout<<"Element not found"<<endl;
    }
}
