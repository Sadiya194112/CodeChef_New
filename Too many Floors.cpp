#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;     cin>>tc;
    while(tc--){
        int x,y;    cin>>x>>y;
        int a=(x+10-1)/10;
        int b=(y+10-1)/10;
        cout<<abs(a-b)<<"\n";
    }
    return 0;
}
