#include <bits/stdc++.h>
using namespace std;

void chad_jango() {
  int n;
  cin>>n;
  int ar[n][n-1];
  vector<int>v;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n-1; ++j)
    {
      cin>>ar[i][j];
    }
  }
  map<int,int>m;
  for (int i = 0; i < n; ++i)
  {
    m[ar[i][0]]++;
  }
  map<int,int>::iterator it;
  it=m.begin();
  int a=it->first;
  it++;
  int b=it->first;
  if (m[a]>m[b])
  {
    
    v.push_back(a);
    v.push_back(b);
  }
  else
  {
    v.push_back(b);
    v.push_back(a);
    b=a;
  }
 
  for (int i = 1; i < n-1; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      if(ar[j][i]!=b)
      {
        v.push_back(ar[j][i]);
        b=ar[j][i];
        break;
      }
    }
  }
  for (int i = 0; i < n; ++i)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--){
        chad_jango();
    }
}