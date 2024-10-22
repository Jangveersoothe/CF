#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;cin>>s;
    if (n%2==0)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<s[i]<<s[i+1];
            if (i!=n-1)
            {
                cout<<"-";
                i++;
            }
        }
    }
    
}