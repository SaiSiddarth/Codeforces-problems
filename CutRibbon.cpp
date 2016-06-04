#include<iostream>
#include<algorithm>
using namespace std;

int a,b,c,d;
int dp[4005];

int findMax(int n)
{
	if(n<0)
		return -99999;
	if(n==0)
		return 1;

	if(dp[n] != -1)
		return dp[n];
	return dp[n]=max((1+findMax(n-a)),max((1+findMax(n-b)),(1+findMax(n-c))));
}
int main()
{
	int n;
	cin>>n>>a>>b>>c;
	d=min(a,min(b,c));
	fill(dp,dp+4005,-1);
	int ans=0;
	ans=max(ans,findMax(n-a));
	ans=max(ans,max(findMax(n-b),findMax(n-c)));
	cout<< ans<<endl;
	return 0;
}