#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    int n;cin>>n;
    vector<vector<char>>v(n,vector<char>(4));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>v[i][j];
        }
    }
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < 4; j++)
        {
            if(v[i][j]=='#'){
                cout<<j+1<<" ";
            }
        }
    }
    cout<<endl;
    
}
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
}