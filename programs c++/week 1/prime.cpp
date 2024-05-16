#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=2,lim;
	cin>>num;
	lim=num/2;
	for(int i=2;i<=lim;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count>2)
	{
		cout<<"FALSE";
	}
	else
	{
		cout<<"TRUE";
	}
	
}
