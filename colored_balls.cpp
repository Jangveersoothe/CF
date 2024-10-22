#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    { int n,x=0;cin>>n;
        int ar[n];
        int M,a;
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
            if (ar[i]==ar[i-1])
            {
                x=1;
            }
            if(i!=0){
            M=max(ar[i],ar[i-1]);
            }
            if (ar[i]==M)
            {
                a=i;
            }
            
        }
        if (x==1)
        {
            cout<<n<<endl;
        }
        if (n==1)
        {
            cout<<1<<endl;
        }
        if (n==2)
        {
            cout<<a+1<<endl;
        }
        
    }
    
}