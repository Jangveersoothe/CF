#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[6]={1,8,30,-5,20,7};
    int k=3;
    
    int curr_sum=0;

    for(int i=0;i<k;i++){
        curr_sum+=a[i];
    }
    int max_sum=curr_sum;

    for(int i=k;i<6;i++){
        curr_sum+=(a[i]-a[i-k]);
        max_sum=max(max_sum,curr_sum);
        cout<<"max_sum="<<max_sum<<endl;
        cout<<"curr_sum="<<curr_sum<<endl;
    }
    cout<<endl;

    cout<<"final ans"<<max_sum;

}