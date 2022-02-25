#include<bits/stdc++.h>
using namespace std;
void Reverse(){
    string s,r="";
    cin>>s;
    int i=0, j=0, l, cnt=0;
    l = s.length();
    for(i=l-1; i>=0; i--){
        r += s[i];
    }
//    cout<<s_new<<endl;
    while(i < l){
        if(s[i]==r[j])  j++;
        else    cnt++;
        i++;
    }
    cout<<cnt-1<<"\n";

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        Reverse();
    }
    return 0;
}
