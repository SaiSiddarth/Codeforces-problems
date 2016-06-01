#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	
	int a,b;
	cin>>a>>b;
	int ctr=0;
	ctr+=a;
	while(a>=b)
	{
		ctr+=a/b;
		a=a/b+a%b;
	}
	cout<<ctr<<endl;
	return 0;
	
	
}