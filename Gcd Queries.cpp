#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,q,i;
    cin>>t;
    while(t--){
        cin>>n>>q;
         int ar[n];
         for(i=1; i<=n; i++)    cin>>ar[i];
         while(q--){
            int l,r,gc=0;
            cin>>l>>r;
            for(i=1; i<=l-1; i++){
                gc = __gcd(gc, ar[i]);
            }
            for(i=r+1; i<=n; i++){
                gc = __gcd(gc, ar[i]);
            }
            cout<<gc<<"\n";
         }
    }


    return 0;
}
