// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;cin>>s;
//     if (s.length()<8)
//     {
//         cout<<"NO";
//     }
    
//     if (s.length()>=8)
//     {
//         int x=0;
//         for (int i = 0; i < s.length()-7; i++)
//         {
//             if (s[i]==s[i+1]&&s[i+1]==s[i+2]&&s[i+2]==s[i+3]&&s[i+3]==s[i+4]&&s[i+4]==s[i+5]&&s[i+5]==s[i+6])
//             {
//                 x=1;
//             }        
//         }
//         if (x=1)
//         {
//             cout<<"YES";
//         }
//         else
//         {
//             cout<<"NO";
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int x=0;
    if (s.length() < 8)
    {
        cout<<"NO";
        return 0;
    }
    for (int i = 0; i <= s.length()-7; i++)
    {
        string sub=s.substr(i,7);
        if (sub=="0000000" || sub=="1111111")
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