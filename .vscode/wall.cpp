#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    long long a,b;cin>>x>>y>>a>>b;
    int c=__gcd(x,y);
    int num=(x*y)/c;
    cout<<(b/num)-((a-1)/num);
}