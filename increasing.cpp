#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int x=1;
        int n;cin>>n;
        vector<long long > a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for (int i = 1; i < n; i++)
        {
            if (a[i]==a[i-1])
            {
                x=0;
            }
        }
        if (a.size()==1)
        {
            cout<<"YES"<<endl;
        }
        
        else if (x==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}