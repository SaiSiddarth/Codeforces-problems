#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int sumx=0,sumy=0,sumz=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			int a;
			cin>>a;
			if(j==0)
				sumx+=a;
			else if(j==1)
				sumy+=a;
			else
				sumz+=a;
		}
	}
	if(sumx==0 && sumy==0 && sumz==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}