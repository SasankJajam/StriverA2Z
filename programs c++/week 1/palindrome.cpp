#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int temp=num;
	int new_num=0;
	while(num>0)
	{
		int rem=num%10;
		new_num=new_num*10+rem;
		num=num/10;
	}
	if(temp==new_num)
	{
		cout<<"TRUE";
	}
	else
	{
		cout<<"FALSE";
	}
}
