#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[5][5];
    int x,y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>ar[i][j];
            if (ar[i][j]==1)
            {
                x=abs(i-2);
                y=abs(j-2);
            }
        }
        
    }
    cout<<x+y;
}