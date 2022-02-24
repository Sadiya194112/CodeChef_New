#include<bits/stdc++.h>
#define ll  long long
using namespace std;
ll GCD(ll a, ll b){
    if(b==0)    return a;
    return GCD(b,a%b);
}
ll LCM(ll a, ll b){
    return (a*b)/GCD(a,b);
}

int main(){
    int tc;
    cin>>tc;
    ll b,c,a;
    while(tc--){
        cin>>b>>c;
        cout<<LCM(b,c)/b<<"\n";
    }
    return 0;
}
