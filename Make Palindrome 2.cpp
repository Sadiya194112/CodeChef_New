#include<bits/stdc++.h>
using namespace std;
void ac(){
    int n,cnt1=0,cnt0=0;  cin>>n;
    string s, st;   cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1')   cnt1++;
        else    cnt0++;
    }
    if(cnt1>=cnt0){
        for(int i=0; i<cnt1; i++)   st+='1';
    }
    else{
        for(int i=0; i<cnt0; i++)   st+='0';
    }
    cout<<st<<"\n";
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
