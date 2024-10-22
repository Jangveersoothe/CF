#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        long long a,b,c,x,y;cin>>a>>b>>c;
        x=abs(a-1);
        y=abs(b-c)+abs(c-1);
        if (x<y)
        {
            cout<<'1'<<endl;
        }
        else if (x>y)
        {
            cout<<'2'<<endl;
        }
        else if (x=y)
        {
            cout<<'3'<<endl;
        }    
    }
    
}