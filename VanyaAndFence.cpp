#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main()
{
	int n,h;
	cin>>n>>h;
	int a,sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a > h)
		{
			sum+=2;
		}
		else
		{
			sum+=1;
		}
	}
	cout<<sum<<endl;
	return 0;
}