#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for (int j = 0; j < n; j++)
    {
        cout<<ar[j]<<" ";
    }
}