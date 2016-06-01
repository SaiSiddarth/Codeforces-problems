#include<iostream>

using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int c=0;
	if(n==0)
		{cout<<"NO"<<endl;return 0;}
	while(n)
	{
		if((n%10)==4 || (n%10)==7)
			c++;
		n=n/10;
	}
	if(c==0)
	{cout<<"NO"<<endl;return 0;}
	while(c)
	{
		if((c%10) == 4 || (c%10) == 7)
		{
			c=c/10;
			continue;
		}
		else
		{
			cout<<"NO"<<endl;
			return 0;
		}
		c=c/10;
	}
	cout<<"YES"<<endl;
	return 0;
}