#include<iostream>
#include<algorithm>

using namespace std;

int max1=0,sum=0,prof=0,no=0;


int max_profit(int l,int u,int a[])
{
	if(l>u)
		return 0;
	else
	{
		max1=max(max1,*max_element(a+l,a+u));
		if(a[l]<max1)
		{
			sum+=a[l];no++;
			prof=(max1*no)-sum;
			return prof=max(prof,max_profit(l+1,u,a));
		}
		else if(a[l]==max1)
		{
			return prof=max(prof,max_profit(l+1,u,a));
		}
		else
		{
			sum=0;no=0;max1=0;
			return prof=max(prof,max_profit(l+1,u,a));
		}
		
		
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<max_profit(0,n-1,a)<<endl;
		delete[] a;
	}
	return 0;
}