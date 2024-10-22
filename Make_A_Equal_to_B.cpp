#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int ct_a=0,ct_b=0;
        int a[n],b[n];
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i]==1)
            {
                ct_a++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            if (b[i]==1)
            {
                ct_b++;
            }
            if(a[i] != b[i]) y++;
        }
        if(a == b){
            cout << "0\n";
            continue;
        }
        int x = abs(ct_a - ct_b);
        if(x != y) x++;
        cout << x << '\n';

    //     for (int i = 0; i < n; i++)
    //     {
    //         if (ct_a>ct_b)
    //         {
    //             if (a[i]!=b[i] && ct_a!=ct_b)
    //         {
    //             a[i]=1-a[i];
    //             if (a[i]==1)
    //             {
    //                 ct_a++;
    //             }
    //             else
    //             {
    //                 ct_a-=1;
    //             }
    //         }
    //         }
    //         else if (ct_a<ct_b)
    //         {
    //             if (a[i]!=b[i] && a[i]==0 && ct_a!=ct_b)
    //         {
    //             a[i]=1-a[i];
    //             if (a[i]==1)
    //             {
    //                 ct_a++;
    //             }
    //             else
    //             {
    //                 ct_a-=1;
    //             }
    //         }
    //         }
    //     }
    //     int x=abs(ct_a-ct_b);
    //     int y=0;
    //     if (a!=b)
    //     {
    //         y=1;
    //     }
    //     cout<<x+y;
    }
}