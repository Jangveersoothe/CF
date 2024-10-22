#include<bits/stdc++.h>
using namespace std;
void chad_jango(){
    int n;cin>>n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    
    sort(a+1,a+n+1);
    int final[n + 1];
    int j = 1;
    for (int i=1; i <= n; i = i+2)
    {
        final[i]=a[j];
        j += 1;
    }
    for (int i=2; i <= n; i = i+2)
    {
        final[i]=a[j];
        j += 1;
    }
    for (int i = 1; i <= n; i++) {
        cout << final[i] << " \n"[i == n];
        
    }
    
}
int main(){
    int t = 1;
    while(t--){
        chad_jango();
    }
}