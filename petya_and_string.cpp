#include <bits/stdc++.h>
using namespace std;

void capital(string s){
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>97)
        {
            s[i] -=32;
        }
    }
}

int main(){
    string a,b;cin>>a>>b;
    capital(a);
    capital(b);
    if (a<b)
    {
        cout<<"-1";
    }
    else if (a==b)
    {
        cout<<"0";
    }
    else if(a>b)
    {
        cout<<"1";
    }
}