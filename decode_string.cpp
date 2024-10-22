#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;cin>>q;
    while (q--)
    {
        int n;cin>>n;
        string s,s1;cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (i<n-3&&s[i]!='0'&&s[i+1]!='0'&&s[i+2]=='0'&&s[i+3]=='0')
            {
                s1+=int(s[i])+48;
                continue;
            }
            else if (i<n-2&&s[i]!='0'&&s[i+1]!='0'&&s[i+2]=='0')
            {
                int x=int(s[i])-48;
                int y=int(s[i+1])-48;
                int z=x*10+y+96;
                s1+=char(z);
                i+=2;
                continue;
            }
            else if (i<n-2&&s[i]!='0'&&s[i+1]=='0'&&s[i+2]=='0')
            {
                s1+=(((int(s[i]))-48)*10)+96;
                i+=1;
                continue;
            }
            else if (i < n - 2 && s[i]!='0'&&s[i+1]!='0'&&s[i+2]!='0')
            {
                s1+=int(s[i])+48;
                continue;
            }
            
            else if (i<n-1 && s[i]!='0'&&s[i+1]!='0')
            {
                s1+=int(s[i])+48;
                continue;
            }
            
            else if (i==(n-1)&&s[i]!='0')
            {
                s1+=int(s[i])+48;
                continue;
            }
            else if (s[i]!='0')
            {
                s1+=int(s[i])+48;
            }
        }
        cout<<s1<<endl;
    }
}