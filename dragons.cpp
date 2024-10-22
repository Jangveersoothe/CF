#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,n;
	cin>>s>>n;
	vector<pair<int,int>>v(n);
	int ct=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i].first>>v[i].second;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i+=1)
	{
		if (s<=v[i].first)
		{
			cout<<"NO";
			break;
		}
		else
		{
			s=s+v[i].second;
			ct++;
		}	
	}
	if (ct==n)
	{
		cout<<"YES";
	}
return 0;
}