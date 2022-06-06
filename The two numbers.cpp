#include<bits/stdc++.h>
#define ll long long
using namespace std;

void ac(){
    ll n,a,b;  cin>>n;
    if(n&1)     a=n/2, b=(n+2-1)/2;
    if(n%4==0)  a=(n/2)-1, b=(n/2)+1;
    if(n%4==2)  a=(n/2)-2, b=(n/2)+2;
    if(n==2)    a=1, b=1;
    ll GCD = __gcd(a,b);
    ll LCM = (a*b)/GCD;

    cout<<LCM-GCD<<"\n";
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
