#include<bits/stdc++.h>
using namespace std;
void Permutation(){
    vector<int> v;
    int n,k,i,val;
    cin>>n>>k;
    if(n==k){
        for(i=1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    else{
        val = n-k+1;
        cout<<val<<" ";
        for(i=1; i<val; i++){
            cout<<i<<" ";
        }
        for(i=val+1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        Permutation();
    }
    return 0;
}
