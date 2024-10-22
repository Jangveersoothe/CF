#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,m;cin>>n>>m;
    int t=0;
    vector<int>v(m);
    for (int i = 0; i <m; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (i==0)
        {
            t+=v[i]-1;
        }
        else if (v[i]<v[i-1])
        {
            t+=abs(n-v[i-1]+v[i]);
        }
        else if (v[i]>v[i-1])
        {
            t+=abs(v[i]-v[i-1]);
        }
    }
    cout<<t;
}