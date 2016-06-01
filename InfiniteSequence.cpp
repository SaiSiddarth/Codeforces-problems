#include<iostream>

using namespace std;
int main()
{
	long int a,b,c;
	cin>>a>>b>>c;
	if(c==0)
	{
		if(a==b)
		{
			cout<<"YES"<<endl;return 0;
		}
		else
		{
			cout<<"NO"<<endl;return 0;
		}
	}
	if(((float)(b-a)/c+1)-((int)(b-a)/c+1)==0 && ((float)(b-a)/c+1 > 0))
	{cout<<"YES"<<endl;
return 0;}
	cout<<"NO"<<endl;
	return 0;
}