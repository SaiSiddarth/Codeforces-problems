#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	n++;
	int flag=0;
	int t;
	int a[10];
	while(n)
	{
		t=n;
		flag=0;
		for(int i=0;i<10;i++)
		{
			a[i]=0;
		}
		while(t)
		{
			a[t%10]++;
			t=t/10;
		}
		for(int i=0;i<10;i++)
		{
			if(a[i] > 1 )
				{flag=1;break;}
		}
		if(flag==0)
		{
			cout<<n<<endl;return 0;
		}
		n++;
		
	}
	return 0;
}