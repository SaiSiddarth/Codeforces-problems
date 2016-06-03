#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main()
{
	int n,h,k;
	cin>>n>>h>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int c=0,sum=0;
	int i=0,t;
	
	for(int i=0;i<n;i++)
	{
		if(a[i] == -1)
		{
			continue;
		}
		t=a[i];
		while(t != 0)
		{
			for(int j=i+1;j<n;j++)
			{
				if((a[j] != -1) && (a[j]<= h-t))
				{
					t+=a[j];a[j]=-1;
				}
				else
				{
					break;
				}

			}
			if(t >= k)
			{c+=t/k;t=t%k;}
			else
			{c+=1;t=0;}
		}
		
	}
	cout<<c<<endl;
	return 0;

}