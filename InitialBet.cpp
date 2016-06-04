#include<iostream>
using namespace std;
int main()
{
	int a,sum=0;
	float ans;
	for(int i=0;i<5;i++)
	{
		cin>>a;
		sum+=a;

	}
	if(sum==0)
	{
		cout<<"-1"<<endl;return 0;
	}
	a=sum/5;
	ans=sum/5.0;
	if(a==ans)
	{
		cout<<a<<endl;
		return 0;
	}
	cout<<"-1"<<endl;
	return 0;


}