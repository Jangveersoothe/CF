#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    long long n;cin>>n;
    long long count,f=0,l=0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int m=abs(a[0]-a[n-1]);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==a[0])
        {
            f++;
        }
        if (a[i]==a[n-1])
        {
            l++;
        }
    }
    if(m == 0) count = n * (n - 1); 
    else count=2*f*l;
    cout<<count<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
}