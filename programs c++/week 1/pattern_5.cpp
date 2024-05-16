#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<2*n;i++)
	{
		if(i>=n)
		{
			for(int s=0;s<i-n+1;s++)
			{
				cout<<" ";
			}
			for(int j=0;j<n-(i-n+1);j++)
			{
				cout<<"* ";
			}
			cout<<endl;
		}
		else
		{
			for(int s=0;s<n-(i+1);s++)
			{
				cout<<" ";
			}
			for(int j=0;j<i+1;j++)
			{
				cout<<"* ";
			}
			cout<<endl;
		}
	}
}
