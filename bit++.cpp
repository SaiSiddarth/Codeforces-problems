#include<iostream>

using namespace std;

int main()
{
	int pc=0,mc=0,n,x=0;
	char c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int j=3;pc=0,mc=0;
		while(j--)
		{
			cin>>c;
			if(c=='+')
				pc++;
			else if(c=='-')
				mc--;
			
		}
		if(pc==2)
			x++;
		else
			x--;
			
	}
	cout<<x;
	return 0;
}