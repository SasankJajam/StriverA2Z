#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,int>hashmap;
	for(int i=0;i<5;i++)
	{
	    int x;
	    cin>>x;
	    hashmap[i]=x;
	}
	for(auto it : hashmap)
	{
	    cout<<it.second<<endl;
	}
}
