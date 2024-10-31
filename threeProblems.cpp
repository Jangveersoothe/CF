#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    set<int>s;
    s.insert(v.begin(),v.end());
    if(s.size()<3){
        cout<<"-1 -1 -1";
        return 0;
    }
    
    
}