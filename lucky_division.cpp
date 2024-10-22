#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int n;cin>>n;
//     int n_o_d=log10(n);
//     for (int i = 1; i <= n_o_d; i++)
//     {
//         if (n%10==4 || n%10==7)
//         {
//             n/=10;
//             if (i==n_o_d)
//             {
//                 cout<<"YES";
//             } 
//         }
        
//     }
    
// }
int main(){
    int n;cin>>n;
    int x=0;
    int ln[13]={4,7,44,47,74,77,444,447,474,477,744,747,777};
    for (int i = 0; i < 13; i++)
    {
        if (n%ln[i]==0)
        {
            x=1;
        }
    }
    if (x==1)
    {
        cout<<"YES";
    }
    else if(x==0)
    {
        cout<<"NO";
    }
    
}