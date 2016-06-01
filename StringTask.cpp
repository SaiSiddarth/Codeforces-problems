#include<iostream>
#include<string>

using namespace std;
int main()
{
    string a;
    char c;
    int i;
    cin>>a;
    int n=a.size();
    for(i=0;i<a.size();i++)
    {
        char c=a[i];
        if(c<91)
        {
            c+=32;a[i]=c;
        }
        if((a[i]=='a') ||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u') || (a[i]=='y'))
        {
        	n--;
            for(int k=i;k<a.size();k++)
            {
                a[k]=a[k+1];
                if(k==(a.size()-1))
                {
                   i--;
                }
            }
        }
    }
	for(i=0;i<n;i++)
	{
		cout<<"."<<a[i];
	}
    return 0;
}