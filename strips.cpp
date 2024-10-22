#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        string a[8];
        int ct=0;
        for (int i = 0; i < 8; i++)
        {
            cin>>a[i];
            if (a[i]=="RRRRRRRR")
            {
                ct++;
            }
        }
        if (ct>0)
            {
                cout<<'R'<<endl;
            }
            
            else
            {
                cout<<'B'<<endl;
            }
            
    }
}