#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
void ac(){
    ll a,b;     cin>>a>>b;
    if((b-a)%3==0 || (b-a)%3==1)     cout<<"YES\n";
    else        cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);     cout.tie(0);

    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
}

