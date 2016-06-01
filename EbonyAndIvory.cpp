#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a,b,c,flag=0;
	cin>>a>>b>>c;
	int i=0;
	if((c%a)==0 || (c%b==0))
	{
		cout<<"Yes";
	}
	else
	{
	while(c>=a)
	{
		c=c-a;
		if(c%b==0)
		{
			cout<<"Yes";
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"No";
	}
	return 0;
}