#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int n,x=0;cin>>n;
    string ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
        if (ar[i]=="++X")
        {
            ++x;
        }
        if (ar[i]=="X++")
        {
            x++;
        }
        if (ar[i]=="--X")
        {
            --x;
        }
        if (ar[i]=="X--")
        {
            x--;
        }
    }
    cout<<x;
}