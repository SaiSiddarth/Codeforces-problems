#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int sumw=0,sumb=0;
	char a;
	char b='C';
	if(isupper(b)){b=tolower(b);cout<<b<<endl;}
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			cin>>a;
			if(isalpha(a))
			{
				if(isupper((int)a))
				{
					if(a=='Q') sumw+=9;
					if(a=='R') sumw+=5;
					if(a=='B' || a=='N') sumw+=3;
					if(a=='P') sumw+=1;
				}
				else
				{
					if(a=='q') sumb+=9;
					if(a=='r') sumb+=5;
					if(a=='b' || a=='n') sumb+=3;
					if(a=='p') sumb+=1;
					
				}
			}
		}
	}
	if(sumw>sumb){cout<<"White"<<endl;return 0;}
	if(sumw<sumb){cout<<"Black"<<endl;return 0;}
	cout<<"Draw"<<endl;
	return 0;
	return 0;
}