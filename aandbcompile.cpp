#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a,suma=0,sumb=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		suma+=a;
	}
	for(int i=0;i<n-1;i++)
	{
		cin>>a;
		sumb+=a;
	}
	cout<<suma-sumb<<endl;suma=0;
	for(int i=0;i<n-2;i++)
	{
		cin>>a;
		suma+=a;
		
	}
	cout<<sumb-suma<<endl;
	return 0;
}