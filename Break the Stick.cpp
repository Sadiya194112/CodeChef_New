#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ll n,x;    cin>>n>>x;
        if(n<x){
            cout<<"NO\n";
            continue;
        }
        if(x&1) cout<<"YES\n";
        else{
            int rem = n%x;
            if(rem&1)   cout<<"NO\n";
            else    cout<<"YES\n";
        }
    }
    return 0;
}
