#include<bits/stdc++.h>
using namespace std;

void Permutation(){
    vector<int> v;
    vector<int> :: iterator it;

    int n, k, i, l;
    cin>>n>>k;
    int a[k+3];
    int prev = 0;

    for(i=0; i<k; i++)  cin>>a[i];

    for(i=0; i<k; i++){
        for(l=a[i]; l>prev; l--){
            v.push_back(l);
        }
        prev = a[i];
    }
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Permutation();
    }
    return 0;
}
