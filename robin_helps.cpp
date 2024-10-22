#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    int total_remaining=0;
    int n,k;
    int ans=0;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]>=k){
            total_remaining+=a[i];
        }
        else if(a[i]==0 && total_remaining>0){
            total_remaining--;
            ans++;
        }
    }
    cout<<ans<<endl;

}
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
}