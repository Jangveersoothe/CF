#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    int a,b;cin>>a>>b;
    if(a>=b)cout<<a<<endl;
    else{
        int jango=b-a;
        if(a-jango>=0)cout<<a-jango<<endl;
        else cout<<0<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
}