#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    int a,b,c;
    cin>>a>>b>>c;
    if ((((2*b)-c)%a==0 && ((2*b)-c)>0) || (a+c)%(2*b)==0 || (((2*b)-a)%c==0 && ((2*b)-a)>0))
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