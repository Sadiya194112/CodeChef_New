#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;     cin>>tc;
    while(tc--){
        int n,x;    cin>>n>>x;
        if(!(x&n))  cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}
