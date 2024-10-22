#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<int>v(m);
    for (int i = 0; i < m; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int mini=INT_MAX;
    // for(int i=0;i<m-n+1;i++){
    //     for(int j=n-1;j<m;j++){
    //         mini=min(mini,v[j]-v[i]);
    //         cout<<mini<<endl;
    //     }
    // }
    int i=0,j=n-1;
    while(i<m-n+1 && j<m){
        mini = min(mini,v[j]-v[i]);
        i++;
        j++;
    }
    cout<<mini;
    
}