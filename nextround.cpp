#include<iostream>
using namespace std;

int main(){
    int n,k;
    int count=0;
    int a[n];
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>=a[k]){
            count++;
        }
    }
    
    
    cout<<count;
}
