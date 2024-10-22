#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        int n=s.length();
        multimap<char,int> m;
        int a=0;
        for (int i = 1; i < n-1; i++)
        {
            if (s[0]>=s[i]&&s[i]>=s[n-1])
            {
                m.insert({s[i],i});
                a++;
            }
            else if (s[0]<=s[i]&&s[i]<=s[n-1])
            {
                m.insert({s[i],i});
                a++;
            }
            
        }
        int cost=abs(int(s[0])-int(s[n-1]));
        cout<<cost<<" "<<a+2<<endl;
        cout<<'1'<<" ";
        if(s[0]<=s[n-1] && !m.empty()){
        multimap<char,int>::iterator it;
        for (it=m.begin() ;it!=m.end(); it++)
        {
            cout<<(*it).second+1<<" ";
        }}
        else if(s[0]>s[n-1] && !m.empty()){
        multimap<char,int>::iterator it;
        for (it=(--m.end()) ;it!=m.begin(); it--)
        {
            cout<<(*it).second+1<<" ";
        }
        cout<<m.begin()->second + 1 <<" ";    
        }
        cout<<n<<endl;
    }
}