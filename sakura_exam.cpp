#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    int a,b;cin>>a>>b;
    if(a%2==0 && (a!=0 || b%2==0)){
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