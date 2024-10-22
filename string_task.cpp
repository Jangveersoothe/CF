#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i])<97 && int(s[i])!='A'&& int(s[i])!='I'&& int(s[i])!='E'&& int(s[i])!='O'&& int(s[i])!='U' && int(s[i])!='Y')
        {
            s1+='.';
            s1+=(int(s[i])+32);
        }
        else if (int(s[i])>=97 && int(s[i])!='a'&& int(s[i])!='i'&& int(s[i])!='e'&& int(s[i])!='o'&& int(s[i])!='u'&& int(s[i])!='y')
        {
            s1+='.';
            s1+=s[i];
        }
    }
    cout<<s1;
}