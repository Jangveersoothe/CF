#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        sort(s.begin(),s.end());
        if (s=="Timru")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    
}