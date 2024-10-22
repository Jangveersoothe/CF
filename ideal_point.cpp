#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    int n,k;cin>>n>>k;
    int L=0,R=51;
    while (n--)
    {
        int l,r;cin>>l>>r;
        if (l<=k && k<=r)
        {
            L=max(l,L);
            R=min(r,R);
        }
    }
    if (L==R)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
}