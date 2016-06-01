#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i,j;
	int ic[n];
	int jc[n];
	std::fill(ic,ic+n,0);
	std::fill(jc,jc+n,0);
	char c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>c;
			if(c=='C')
			{
				ic[i]++;jc[j]++;
			}
			
		}
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		count+=(ic[i]*(ic[i]-1)/2)+(jc[i]*(jc[i]-1)/2);
	}
	cout<<count;
	return 0;
	
}