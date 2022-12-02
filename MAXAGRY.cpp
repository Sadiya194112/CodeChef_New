#include<bits/stdc++.h>
#define ll long long
using namespace std;
void ac(){
    ll n,k,op,x,badjabe,r;    cin>>n>>k;
    r = n/2;
    if(n==1)    cout<<0<<endl;
    else if(k>=r)     cout<<(n*(n-1))/2<<endl;
    else{
        op = (n*(n-1))/2;
        x = n - (k*2);  //x=jara swap hoyni tader count
        badjabe = (x*(x-1))/2;
//        cout<<x<<" "<<badjabe<<endl;
        ll lagbe = op-badjabe;
        cout<<lagbe<<endl;
    }
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
