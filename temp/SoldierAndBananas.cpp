#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;cin>>k>>n>>w;
    int curr=0;
    int sum=0;
    for(int i=0;i<w;i++){
        curr+=k;
        
        sum+=curr;
        
    }
    int ans=sum-n;cout<<ans;
}