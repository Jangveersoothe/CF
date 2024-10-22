#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int& b=a;
    b++;
    a--;
    cout<<"b="<<b<<endl;
    cout<<"a="<<a;
}