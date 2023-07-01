#include<bits/stdc++.h>
using namespace std;
int a[450][450];
int main()
{
	int n;
	cout<<"请输入一个奇数:";
	cin>>n;
	int w=n;
	int j=w/2,i=0;
	int c=w*w;
	int v=1;
	while(c--)
	{
		if(a[i][j]!=0)
		{
			i=(i+1)%w;
		}
		a[i][j]=v;
		v++;
		if(0==i&&j==w-1)
		{
			i++;
		}
		else
		{
			int x=(i-1+w)%w;
			int y=(j+1)%w;
			if(a[x][y]==0)
			{
				i=x;
				j=y;
			}
		}
	}
	for(int i=0;i<w;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(w*w<100)
			{
				printf("%3.d",a[i][j]);
			}
			else
			{
				if(w*w<1000)
				{
					printf("%4.d",a[i][j]);
				}
				if(w*w<10000&&w*w>9999)
				{
					printf("%5.d",a[i][j]);
				}
			}
		}
		cout<<"\n\n";
	}
	return 0;
}
