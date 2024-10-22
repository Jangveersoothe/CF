#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int ar[n], sum=0,sum1=0,j=n;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sort(ar,ar+n);
    while (j--)
    {
        sum1+=ar[j-1];
        if (sum1>sum/2)
        {
            cout<<n-j;
            break;
        }   
    }
}