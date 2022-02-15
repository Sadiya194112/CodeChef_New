#include<bits/stdc++.h>
using namespace std;
void AntiPalindrome(){
    int n,i,mx=0;
    cin>>n;
    string s;
    cin>>s;
    map<char, int> mp;
    for(i=0; i<n; i++){
        mp[s[i]]++;
        mx = max(mx, mp[s[i]]);
    }
    if(n%2==1 || mx>n/2)    cout<<"NO\n";
    else{
        vector<char> v;
        for(auto it : mp){
            for(i=1; i<=it.second; i++){
                v.push_back(it.first);
            }
        }
        cout<<"YES\n";
        for(i=0; i<n/2; i++)    cout<<v[i];
        for(i=n-1; i>=n/2; i--) cout<<v[i];
    }
    cout<<"\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        AntiPalindrome();
    }
    return 0;
}
