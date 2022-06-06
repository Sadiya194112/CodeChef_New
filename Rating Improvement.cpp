#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;     cin>>tc;
    while(tc--){
        int x,y;    cin>>x>>y;
        if(y>=x && y<=x+200)    cout<<"YES\n";
        else    cout<<"NO\n";
    }
    return 0;
}
