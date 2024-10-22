#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    float n;cin>>n;
    int a=1,b=3*n;
    int m=ceil(n/2.0);
    cout<<m<<endl;
    for (int i = 0; i < m; i++)
    {
        cout<<a<<" "<<b<<endl;
        a+=3;
        b-=3;
    }

}
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
}