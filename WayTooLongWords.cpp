#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        int l=s.length();

        if (l>10)
        {
            cout<<s[0];

            cout<<l-2;

            cout<<s[l-1]<<endl;
            
        }

        else
        {
            cout<<s<<endl;
        }
        
        
    }
       
}