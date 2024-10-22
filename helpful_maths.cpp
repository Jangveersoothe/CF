// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;cin>>s;
//     string a;
//     for (int i = 0; i < sizeof(s); i++)
//     {
//         if (s[i]!='+')
//         {
//             a.push_back(s[i]);
//         }
//     }
//     sort(a.begin(),a.end());
//     cout<<a[0];
//     for (int i = 1; i < sizeof(a); i++)
//     {
//         cout<<'+'<<a[i];
//     }
    
// }
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i+=2)
    {
        for(int j=0; j<s.size()-1; j+=2)
        {
            if(s[j]>s[j+2])
            {
                swap(s[j],s[j+2]);
            }
        }
    }
    cout<<s<<endl;
}