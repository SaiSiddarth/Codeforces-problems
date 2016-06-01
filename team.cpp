#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,t,count=0;
	cin>>n;
	int *a=new int[n];
	fill(a,a+n,0);
	for(int i=0;i<n;i++)
	{
		int j=3;
		while(j--)
		{
			cin>>t;
			if(t==1)
			{
				a[i]++;
			}
		}
		if(a[i]>1)
				count++;
	}
	
	cout<<count;
	return 0;
}