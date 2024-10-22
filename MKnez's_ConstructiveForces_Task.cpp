#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    int n;cin>>n;
    int kwali[1000];
    for (int i = 0; i < 1000; i++)
    {
        kwali[i]=(i-1)/2;
    }
    
    if (n%2==0)
    {
        cout<<"YES"<<endl;
        int e[n];
        for (int i = 0; i < n; i++)
        {
            if (i%2==0)
            {
                e[i]=-1;
            }
            else
            {
                e[i]=1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<e[i]<<" \n"[i == n];
        }
    }
    if (n%2!=0 && n>=5)
    {
        int k=kwali[n];
        cout<<"YES"<<endl;
        int o[n];
        for (int i = 0; i < n; i++)
        {
            if (i%2==0)
            {
                o[i]=k-1;
            }
            else
            {
                o[i]=-k;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<o[i]<<" \n"[i == n-1];
        }
    }
    if(n%2!=0 && n<5)
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