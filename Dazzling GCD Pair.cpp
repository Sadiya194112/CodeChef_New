#include<bits/stdc++.h>
#define ll long long
using namespace std;
void Test(){
    ll a,b,d;
    cin>>a>>b;
    d = b-a;
    if(d==1)    cout<<"-1\n";
    else if(d>=2 && a%2==0)    cout<<a<<" "<<a+2<<"\n";
    else if(d>=3 && a%2!=0 && a%3!=0)   cout<<a+1<<" "<<a+3<<"\n";
    else if(d>=3 && a%2!=0 && a%3==0)   cout<<a<<" "<<a+3<<"\n";
    else cout<<"-1\n";

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        Test();
    }
    return 0;
}
