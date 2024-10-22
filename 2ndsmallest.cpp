#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n){

    int first=INT_MAX,second=INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]<first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]<second && arr[i]!=first){
            second=arr[i];
        }
    }
    return second;
    
}

int main(){
    int a[5];
    cout<<"Enter the 5 elements of the array:"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    int ans;
    ans=secondSmallest(a,5);
    cout<<"Second smallest element is: "<<ans;
}