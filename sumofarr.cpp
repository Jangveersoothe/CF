#include <bits/stdc++.h>
using namespace std;


int sumOfArr(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    return ans;
} 

int main(){

    int a[5];
    cout<<"Enter the 5 elements of the array:"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int res=sumOfArr(a,5);

    cout<<"Sum of elements: "<<res;
}