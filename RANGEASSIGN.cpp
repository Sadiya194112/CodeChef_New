#include<bits/stdc++.h>
#define ll long long
using namespace std;
void ac(){
    int n;  cin>>n;
    int a[n+3];
    int i,x,y,s,e;
    for(i=0; i<n; i++)  cin>>a[i];
    for(i=0; i<n; i++){
        x=a[i];
        s=i;
        e=find(a+i+1, a+n, x)- a;
        cout<<e<<endl;
        if(e!=n){

        }
    }
}
int main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}
