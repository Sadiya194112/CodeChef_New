#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll divisors_sum(ll x){
    ll sum=0;
    for(int i=1; i*i<=x; i++){
        if(x%i != 0)    continue;

        sum+=i;
        if(x/i != i)    sum += x/i;
    }
    return sum;
}
void solve(){
    ll X,A,B;
    cin>>X>>A>>B;

    if(((B*X)%A != 0) || A<B){
        cout<<"-1\n";
        return;
    }
    ll N = B*X / A;
    if(divisors_sum(N)==X)  cout<<N<<"\n";
    else cout<<"-1\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
