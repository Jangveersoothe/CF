#include<bits/stdc++.h>
using namespace std;
void noice(){
    int n;cin>>n;
    int ct=0;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    map<int,int>mp;
    for (int i = n-1; i >=0; i--)
    {
        if (is_sorted(ar+i+1,ar+n))
        {
            mp[ar[i]]=1;
        }
        else if (!is_sorted(ar+i+1,ar+n))
        {
            for (int j = 0; j <= i; j++)
            {
                mp[ar[j]]=0;
            }
        }
        set<int>s;
        for (int k = n-1; k >=0; k--)
        {
            if (mp[ar[k]]==0)
            {
                
            }
            
        }
        
    }
    cout<<ct;
}


int main(){
    int t;cin>>t;
    while(t--){
        noice();
    }
}