#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main()
{
	int k,c=-1,i,t;
	cin>>k;
	int a[k];
	int b[k];
	
	for(i=0;i<k-1;i++)
	{
		cin>>a[i]>>b[i];
		c=max(c,b[i]);
		if(i!=0)
		{
		b[i]=b[i-1]-a[i]+b[i];
		c=max(c,b[i]);
		}
	}
	
	cin>>a[i]>>t;
	c=max(c,a[i]);
	cout<<c<<endl;
	return 0;
}