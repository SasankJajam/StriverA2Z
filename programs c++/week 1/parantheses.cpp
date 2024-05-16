#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char>st;
	string s="{{{[(]}}}";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			st.push(s[i]);
		}
		else if(s[i]==')' || s[i]=='}' || s[i]==']')
		{
			if(st.empty())
			{
				return false;
			}
			else if(s[i]==')' and st.top()!='(')
			{
				return false;
			}
			
			else if(s[i]=='}' and st.top()!='{')
			{
				return false;
			}
			
			else if(s[i]==']' and st.top()!='[')
			{
				return false;
			}
			else{
				st.pop();
			}
		}
	}
	return st.empty();
	
	
}
