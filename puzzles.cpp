#include<iostream>
#include<algorithm>

using namespace std;

int n,m;
int diff;

int min_diff(int l,int u,int t,int a[])
{
	//cout<<"l= "<<l<<"  u= "<<u<<endl;
	if(u>(t-1))
	{
		//cout<<"Inside if block...."<<endl;
		return 100000000;
	}
	else
	{
		//cout<<"Inside else block...."<<endl;
		//diff=a[u]-a[l];
		//cout<<diff<<endl;
		return min(a[u]-a[l],min_diff(l+1,u+1,t,a));
		//cout<<diff<<endl;
		
	}
}
int main()
{
	int m;
	cin>>n>>m;
	int *a=new int[m];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	sort(a,a+m);
	cout<<min_diff(0,n-1,m,a);
	return 0;
}