#include<bits/stdc++.h>
using namespace std;
void distinctString(){
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    int ans=1;
    for(i=1; i<n; i++){
        if(s[i]==s[i-1])    continue;
        ans++;
    }
    cout<<ans<<"\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        distinctString();
    }
    return 0;
}
