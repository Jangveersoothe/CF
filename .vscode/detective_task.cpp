#include<bits/stdc++.h>
using namespace std;
void noice(){
    string s;cin>>s;
    int x1=0,x0=s.size()-1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='1')
        {
            x1=i;
        }
        else if (s[i] == '0') {
            break;
        }
    }
    for (int i = s.size()-1; i >= 0; i--)
    {
        if (s[i]=='0')
        {
            x0=i;
        }
        else if (s[i] == '1') {
            break;
        }
    }
    cout<<abs(x0-x1)+1<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        noice();
    }
}