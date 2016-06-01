#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a.size()>10)
        {
            cout<<a[0]<<a.size()-2<<a[a.size()-1]<<endl;
        }
        else
        cout<<a<<endl;
    }
    return 0;
}