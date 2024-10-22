#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    int x,y,k;cin>>x>>y>>k;
    int ans;
    ans=max(x,y);
    ans=((ans+k-1)/k);
    ans=ans*2;
    if(x>y){
        cout<<ans-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
}