#include<iostream>
using namespace std;

int main()
{
    int n,k,count=0;
    
    cin>>n>>k;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int i=0;
    while((a[i]>=a[k-1]) && (a[i]>0) && (i<n))
    {
        count++;
        i++;
    }
    delete[] a;
    cout<<count;
    return 0;
}