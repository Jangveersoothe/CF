#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    long long n;cin>>n;
    cout<<((4*n)/__gcd(4ll,n+1))+1<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
}