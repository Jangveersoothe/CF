#include<bits/stdc++.h>
using namespace std;

const long long INF =1e18;
bool midpointVal(int n,vector<int>& ar, int totSum, int x){
    vector<int>newAr=ar;
    newAr[n-1]+=x;
    int newSum=totSum+x;
    double newAvg=newSum/(2.0*n);
    int countBelow=0;
    for(int i=0;i<n;i++){
        if(newAvg>newAr[i]){
            countBelow++;
        }
    }
    return countBelow>n/2;

}


int minAddValue(int n, vector<int>&ar, int totSum){
    long long l=0, r=INF, pureAdd=-1;

    while(l<=r){
        long long mp=l+(r-l)/2;
        if(midpointVal(n,ar,totSum,mp)){
            pureAdd=mp;
            r=mp-1;
        }
        else{
            l=mp+1;
        }
    }
    return pureAdd;
}


void chod_jango(){
    int n;cin>>n;
    int totSum=0;
    vector<int>ar(n);

    for(int i=0;i<n;i++){
        cin>>ar[i];
        totSum+=ar[i];
    }

    if(n==1 || n==2){
        cout<<-1<<endl;
        return;
    }

    sort(ar.begin(),ar.end());
    long long countBelow=0;
    long long res=minAddValue(n,ar,totSum);
    if(res<0){
        cout<<0<<endl;
    }
    else{
    cout<<res<<endl;}

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--){
        chod_jango();
    }
    return 0;
}