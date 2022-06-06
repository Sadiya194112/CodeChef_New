#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;     cin>>tc;
    while(tc--){
       int n;   cin>>n;
       int a[n+3];
       for(int i=0; i<n; i++){
            cin>>a[i];
       }
       int sum=0, mx=INT_MIN;
       for(int i=1; i<n; i++){
            sum = a[i]+a[i-1];
            mx = max(mx, sum);
       }
       sum = a[0]+a[n-1];
       mx = max(mx, sum);
       cout<<mx<<endl;
    }
    return 0;
}

