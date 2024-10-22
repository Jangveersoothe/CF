#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int sum=0;
        string s;cin>>s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            if (a[i]>=a[i+1] && s[i]=='0')
            {
                swap(s[i],s[i+1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='1')
            {
                sum+=a[i];
            }
        }
        cout<<sum;
    }
    
}