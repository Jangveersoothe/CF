#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;

    int a[n],count=1,ans=1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if (i>0)
        {
            if (a[i]>=a[i-1])
            {
                count++;
                ans=max(count,ans);
            }
            else
            {
                count=1;
            }
            
        }
        
        
    }
    cout<<ans;
}