#include<iostream>
#include<map>
#include<algorithm>
#include<string>


#define mp make_pair



using namespace std;


int main()
{
	int n,j,i;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>n;
			if(n==1)
			{
				cout<<abs(j-2)+abs(i-2)<<endl;
				return 0;
			}
			
		}
	}

	
	return 0;
}