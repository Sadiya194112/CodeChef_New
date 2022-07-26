#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,m,r,c;
    cin>>n>>m;
    r = n, c = m;
    if(n&1) r--;
    if(m&1) c--;
    cout<<(n*m)-(r*c)<<"\n";
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
