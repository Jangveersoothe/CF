#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    int n,k;cin>>n>>k;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int a=0,b=0;
    for(int i=1;i<=n;i++){
        if(a+(n-i+1)*(v[i]-v[i-1])>=k){
            b+=(k-a);
            break;
        }
        b+=(n-i+1)*(v[i]-v[i-1])+1;
        a+=(n-i+1)*(v[i]-v[i-1]);
    }
    cout<<b<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
    return 0;
}