#include<iostream>

using namespace std;

int main()
{
	long long int n,k,m;
	cin>>n>>k;
	if((n & 1) == 1)
		m=(n+1)/2;
	if((n & 1) == 0)
		m=n/2;
	if(k <=m)
	{
		cout<<2*k-1<<endl;
	}
	else
	{
		k-=m;
		cout<<2*k<<endl;
	}
	return 0;
}