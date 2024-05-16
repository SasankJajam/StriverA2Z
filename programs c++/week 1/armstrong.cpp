#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,temp;
	cin>>num;
	temp=num;
	int new_sum=0;
	while(temp>0)
	{
		int rem=temp%10;
		new_sum=new_sum+(rem*rem*rem);
		temp/=10;
	}
	if(new_sum==num)
	{
		cout<<"TRUE";
	}
	else
	{
		cout<<"FALSE";
	}
}
