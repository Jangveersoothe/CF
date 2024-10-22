#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    long long n,k;
    cin>>n>>k;
    long long starting = max(1LL, n-k+1);
    long long ending= n;
    long long oddC= 0;
    if(starting%2==1){
        oddC=(ending-starting)/2+1;
    }
    else{
        oddC=(ending-starting+1)/2;
    }
    if(oddC%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
}